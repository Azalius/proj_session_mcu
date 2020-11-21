/*
 * Keyboard.cpp
 *
 *  Created on: Nov 21, 2020
 *      Author: Azalius
 */

#include "Keyboard.h"

Keyboard::Keyboard() {

	gpio_pin_config_t config;

	config.pinDirection = kGPIO_DigitalOutput;
	config.outputLogic = 0;

	for(int i = 0; i < 4 ; i++){ //cols init
		GPIO_PinInit(COLS_BOARD, this->pin_cols[i] , &config);
	}
	config.pinDirection = kGPIO_DigitalInput;
	for(int i = 0; i < 4 ; i++){ //rows init
		GPIO_PinInit(ROWS_BOARD, this->pin_rows[i] , &config);
	}

}

enum button Keyboard::getKey(){
	enum button aret=none;
	for(int i = 0 ; i < 4; i++){
		//on power uniquement la ligne dont on a besoin
		GPIO_PinWrite(COLS_BOARD, this->pin_cols[(i-1)%4], 0);
		GPIO_PinWrite(COLS_BOARD, this->pin_cols[i], 1);
		for (int j = 0 ; j <= 4 ; j++){
			if(GPIO_ReadPinInput(GPIO, ROWS_BOARD, this->pin_cols[j])){
				aret = this->layout[i][j];
			}
		}
	}
	return aret;
}

