/*
 * myhmi.c
 *
 *  Created on: Mar 23, 2022
 *      Author: J. F. Arribas
 *  @brief
 *  Tutto quello che serve per la gestione delle interazione con l'utente
 */


#include "myhmi.h"
#include "gpio.h"

#define TIME_LED_ON 100
#define TIME_LED_OFF 1000

static state_t_led state_led = LED_OFF;
static uint32_t timer_led = 0;

/*
 * State finite machine for led blinking
 *
 * @Args
 * None
 *
 * @Returns
 * None
 */
void BlinkLed(void){

	switch(state_led){

	case LED_OFF:
		if(HAL_GetTick() - timer_led > TIME_LED_OFF){
			HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_SET);
			timer_led = HAL_GetTick();
			state_led = LED_ON;

		}
		break;

	case LED_ON:
		if(HAL_GetTick() - timer_led > TIME_LED_ON){
			HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);
			timer_led = HAL_GetTick();
			state_led = LED_OFF;

		}
		break;
	}
}
