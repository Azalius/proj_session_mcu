/*
 * Fan.h
 *
 *  Created on: Nov 21, 2020
 *      Author: Azalius
 */

#ifndef FAN_H_
#define FAN_H_

#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL27Z644.h"
#include "fsl_debug_console.h"
#include "fsl_tpm.h"

#define FAN_CHANNEL (tpm_chnl_t)0//BOARD_FIRST_TPM_CHANNEL
#define BOARD_TPM_BASEADDR       TPM2
#define TPM_SOURCE_CLOCK CLOCK_GetFreq(kCLOCK_McgIrc48MClk)

class Fan {
public:
	Fan();
	void setSpeed(int value);
};

#endif /* FAN_H_ */
