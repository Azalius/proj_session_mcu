/*
 * Fan.h
 *
 *  Created on: Nov 21, 2020
 *      Author: Azalius
 */

#ifndef FAN_H_
#define FAN_H_

#define BOARD_FAN GPIOA
#define PIN_FAN 1

class Fan {
public:
	Fan();
	void setSpeed(int value);
};

#endif /* FAN_H_ */
