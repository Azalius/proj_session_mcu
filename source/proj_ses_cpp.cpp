
 
/**
 * @file    proj_ses_cpp.cpp
 * @brief   Application entry point.
 */
#include <stdio.h>
#include <math.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL27Z644.h"
#include "fsl_debug_console.h"
#include "fsl_tpm.h"

#include "Keyboard.h"

#define BOARD_TPM_BASEADDR       TPM2
#define TPM_SOURCE_CLOCK CLOCK_GetFreq(kCLOCK_McgIrc48MClk)

int nbDigit = 4;
int isLocked=1;

void resetInput(int* input, int* posCursor){
	for (int i = 0; i < nbDigit;i++){
		input[i]=0;
	}
	*posCursor = 0;
}
void lock(){
	isLocked=1;
	GPIO_PinWrite(GPIOB, 2, 0);
	GPIO_PinWrite(GPIOB, 3, 1);
}

void unlock(){
	isLocked=0;
	GPIO_PinWrite(GPIOB, 2, 1);
	GPIO_PinWrite(GPIOB, 3, 0);
}


/*
 * @brief   Application entry point.
 */
int main(void) {

  	/* Init board hardware. */
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();
#ifndef BOARD_INIT_DEBUG_CONSOLE_PERIPHERAL
    /* Init FSL debug console. */
    BOARD_InitDebugConsole();
#endif


	gpio_pin_config_t config;
	config.pinDirection = kGPIO_DigitalOutput;
	config.outputLogic = 0;
	GPIO_PinInit(GPIOB, 2, &config);
	GPIO_PinInit(GPIOB, 3 , &config);


	Keyboard* kb = new Keyboard();


	int code=1234;

	int posCursor=0;
	int input[nbDigit];
	resetInput(input, &posCursor);
	lock();
	int resultBtnPress; //the integer value of the key pressed, between 0 & 10^nbDigit

	printf("Started\n");
	while(1){
		enum button pressed = kb->getKey();
		if (pressed != none){
			if (pressed==cancel){
				resetInput(input, &posCursor);
				lock();
			}
			else if (pressed <= 9){
				input[posCursor] = (int)pressed;
				printf("%d\n", input[posCursor]);
				posCursor ++;
				posCursor %=nbDigit;
			}else if (pressed==valider){
				resultBtnPress=0;
				for (int i = 0; i <nbDigit ; i++){
					resultBtnPress += input[i]*pow(10,nbDigit-i-1);
				}

				if(isLocked){
					if(resultBtnPress == code){
						unlock();
						printf("Unlocked with %d\n", resultBtnPress);
					}else{
						printf("Wrong code : %d\n", resultBtnPress);
					}
				}else{
					code=resultBtnPress;
					printf("New code is %d\n", code);
				}
				resetInput(input, &posCursor);
     		}
		}
	}
	return 0 ;
}
