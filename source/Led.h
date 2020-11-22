/*
 * Led.h
 *
 *  Created on: Nov 21, 2020
 *      Author: Azalius
 */

#ifndef LED_H_
#define LED_H_

#include "fsl_tpm.h"


class Led {
public:
	Led();
	void setRed(int value);
	void setBlue(int value);
	void setGreen(int value);
private:

};

#endif /* LED_H_ */
