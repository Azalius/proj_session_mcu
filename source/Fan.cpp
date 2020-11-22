/*
 * Fan.cpp
 *
 *  Created on: Nov 21, 2020
 *      Author: Azalius
 */

#include "Fan.h"
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL27Z644.h"
#include "fsl_debug_console.h"
#include "fsl_tpm.h"

Fan::Fan() {
		tpm_chnl_pwm_signal_param_t tpmParam;
	    tpmParam.chnlNumber       = (tpm_chnl_t)FAN_CHANNEL;
	    tpmParam.level            = kTPM_HighTrue;
	    tpmParam.dutyCyclePercent = 0U;
	    TPM_SetupPwm(BOARD_TPM_BASEADDR, &tpmParam, 1U, kTPM_EdgeAlignedPwm, 24000U, TPM_SOURCE_CLOCK);
}

void Fan::setSpeed(int value){
	TPM_UpdatePwmDutycycle(BOARD_TPM_BASEADDR, FAN_CHANNEL, kTPM_EdgeAlignedPwm, value);
}
