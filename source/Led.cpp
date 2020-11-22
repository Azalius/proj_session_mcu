/*
 * Led.cpp
 *
 *  Created on: Nov 21, 2020
 *      Author: Azalius
 */

#include "Led.h"
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL27Z644.h"
#include "fsl_debug_console.h"
#include "fsl_tpm.h"

Led::Led() {

}
void Led::setBlue(int value){
	//TPM_UpdatePwmDutycycle(BOARD_TIMER_PERIPHERAL, kTPM_Chnl_3, kTPM_EdgeAlignedPwm, value);
}
void Led::setGreen(int value){
	//TPM_UpdatePwmDutycycle(BOARD_TIMER_PERIPHERAL, kTPM_Chnl_2, kTPM_EdgeAlignedPwm, value);
}
void Led::setRed(int value){
	//TPM_UpdatePwmDutycycle(BOARD_TIMER_PERIPHERAL, kTPM_Chnl_1, kTPM_EdgeAlignedPwm, value);
}


