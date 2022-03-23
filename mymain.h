/*
 * mymain.h
 *
 *  Created on: Mar 23, 2022
 *      Author: J. F. Arribas
 *
 * @brief
 * Virtual main
 */

#ifndef INC_MYMAIN_H_
#define INC_MYMAIN_H_

// States in main finite state machine
typedef enum{IDLE, STATE1, STATE2, STATE3}state_t;

// Functions
void MyMain(void);


#endif /* INC_MYMAIN_H_ */
