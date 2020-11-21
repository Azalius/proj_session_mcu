/*
 * Keyboard.h
 *
 *  Created on: Nov 21, 2020
 *      Author: Azalius
 */

#ifndef KEYBOARD_H_
#define KEYBOARD_H_

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
	fanBtn=15
};

class Keyboard {
public:
	Keyboard();
	enum button getKey();
};

#endif /* KEYBOARD_H_ */
