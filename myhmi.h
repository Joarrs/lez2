/*
 * myhmi.h
 *
 *  Created on: Mar 23, 2022
 *      Author: J. F. Arribas
 *
 *  @brief
 *  Tutto quello che serve per la gestione delle interazione con l'utente
 */

#ifndef INC_MYHMI_H_
#define INC_MYHMI_H_

//states of the led finite state
typedef enum{LED_ON, LED_OFF}state_t_led;

//functions
void BlinkLed(void);


#endif /* INC_MYHMI_H_ */
