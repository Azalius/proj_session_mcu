/*
 * Keyboard.h
 *
 *  Created on: Nov 21, 2020
 *      Author: Azalius
 */

#ifndef KEYBOARD_H_
#define KEYBOARD_H_

#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL27Z644.h"
#include "fsl_debug_console.h"
#include "fsl_tpm.h"

#define SOURCE_CLOCK CLOCK_GetFreq(kCLOCK_CoreSysClk)

#define COLS_BOARD GPIOC
#define ROWS_BOARD GPIOD

enum button {
	zero = 0,
	one = 1,
	two= 2,
	three=3,
	four=4,
	five=5,
	six=6,
	seven=7,
	eight=8,
	nine=9,
	red=10,
	green=11,
	blue=12,
	cancel=13,
	none=14,
	fanBtn=15,
	valider=16
};

class Keyboard {
public:
	Keyboard();
	enum button getKey();
private:
	const enum button layout[4][4]={
			one, two, three, red,
			four, five, six, green,
			seven, eight, nine, blue,
			cancel, zero, valider, fanBtn
	};
	int pin_rows[4] = {2,3,4,5};
	int pin_cols[4] = {4,6,7,5};
};

#endif /* KEYBOARD_H_ */
