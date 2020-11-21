/*
 * Fan.cpp
 *
 *  Created on: Nov 21, 2020
 *      Author: Azalius
 */

#include "Fan.h"

Fan::Fan() {
	gpio_pin_config_t config;

	config.pinDirection = kGPIO_DigitalOutput;
	// on cree une config en mode output cette fois ci. Mode sortie pour écrire le status des LEDs.
	config.outputLogic = 1;

	GPIO_PinInit(GPIOB, PIN_FAN , &config); //todo right board?

}

void Fan::setSpeed(int value){

}
