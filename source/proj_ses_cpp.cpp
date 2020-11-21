
 
/**
 * @file    proj_ses_cpp.cpp
 * @brief   Application entry point.
 */
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL27Z644.h"
#include "fsl_debug_console.h"

#include "Keyboard.h"
#include "Led.h"
#include "Fan.h"



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

	Keyboard* kb = new Keyboard();
	Led* led = new Led();
	Fan* fan = new Fan();
	int posCursor=0;
	int input[3] = {0,0,0};
	int resultBtnPress; //the integer value of the key pressed, between 0 & 100

	while(1){
		enum button pressed = kb->getKey();
		if (pressed != none){
			if (pressed==cancel){
				posCursor=0;
				input[0]=0;input[1]=0;input[2]=0;
			}
			else if (pressed <= 9){
				input[posCursor] = (int)pressed;
				posCursor ++;
				posCursor %=3;
			}else{ // if were are setting an output
				resultBtnPress=0;
				for (int i = posCursor; i >=0 ; i++){
					resultBtnPress += input[posCursor-i]*10^(posCursor-i);
				}
				if (pressed==red){
					led->setRed(resultBtnPress);
				}else if (pressed==blue){
					led->setBlue(resultBtnPress);
				}else if(pressed==green){
					led->setGreen(resultBtnPress);
				}else if(pressed==fanBtn){
					fan->setSpeed(resultBtnPress);
				}

				posCursor=0;
			}
		}
	}
	return 0 ;
}
