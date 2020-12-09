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

#define COLS_BOARD GPIOC //bank de GPIO des cols
#define ROWS_BOARD GPIOD //bank de GPIO des lignes

enum button {
	zero = 0,	one = 1,	two= 2,	three=3,
	four=4,	five=5,six=6,seven=7,eight=8,
	nine=9,a=10,b=11,c=12,cancel=13,
	none=14,d=15,valider=16
}; //liste des boutons connus

class Keyboard {
public:
	Keyboard();
	enum button getKey();
private:
	const enum button layout[4][4]={ //layout du clavier
			one, two, three, a,
			four, five, six, b,
			seven, eight, nine, c,
			cancel, zero, valider, d
	};
	int pin_rows[4] = {2,3,4,5}; // pins physique des lignes
	int pin_cols[4] = {4,6,7,5}; // pins physique des colonnes
};

#endif /* KEYBOARD_H_ */
