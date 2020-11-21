/*
 * Led.cpp
 *
 *  Created on: Nov 21, 2020
 *      Author: Azalius
 */

#include "Led.h"

Led::Led() {
    gpio_pin_config_t config;

    config.pinDirection = kGPIO_DigitalOutput;
    // on cree une config en mode output cette fois ci. Mode sortie pour écrire le status des LEDs.
    config.outputLogic = 1;

    GPIO_PinInit(GPIOA, BOARD_LED_BLUE_GPIO_PIN, &config);
    GPIO_PinInit(GPIOB, BOARD_LED_RED_GPIO_PIN , &config);
    GPIO_PinInit(GPIOB, BOARD_LED_GREEN_GPIO_PIN , &config);


}
void Led::setBlue(int value){

}
void Led::setGreen(int value){

}
void Led::setRed(int value){

}


