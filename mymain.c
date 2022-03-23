/*
 * mymain.c
 *
 *  Created on: Mar 23, 2022
 *      Author: J. F. Arribas
 *
 *
 *  @brief
 *  Virtual main
 */

#include "mymain.h"
#include "gpio.h"
#include "myhmi.h"



/*
 * @brief
 * Virtual Main
 *
 * @args
 * None
 *
 * @Returns
 * None
 */
void MyMain(void){
	state_t state;

	state = IDLE;

	//Main state machine
	while(1){
		switch(state){
		case IDLE:
			BlinkLed();
			break;

		case STATE1:
			break;

		case STATE2:
			break;

		case STATE3:
			break;
		}//end of switch

	}//end while 1

}//end of virtual main
