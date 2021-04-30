#ifndef _ACTIVITY_1_H_
#define _ACTIVITY_1_H_
/**
 * @file activity1.h
 * @author Shreyus R D (shreyas.vasuki@gmail.com)
 * @brief Project to switch on led when both seat and heater switches are on
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */


/**
 * Macro Definitions
 */
#define LED_ON 	(0x01)	/* LED ON state */
#define LED_OFF	(0x00)  /* LED OFF state */
#define LED_PORT (PORTB) /* LED port*/
#define LED_PIN (PORTB0) /* LED pin*/
#define SEAT_PORT (PORTB) /* SEAT port */
#define SEAT_PIN (PORTB6) /* SEAT pin */
#define HEATER_PORT (PORTB) /* HEATER port */
#define HEATER_PIN (PORTB7) /* HEATER pin */
#define SEAT_SWITCH_ON (PINB & (1<<SEAT_PIN))
/**
 * @brief check if the seat switch is on 
 * 
 */
#define HEATER_ON (PINB & (1<<HEATER_PIN))
/**
 * @brief check if heater is on 
 * 
 */
#define LED_PIN_OUTPUT (DDRB|=(1<<LED_PIN))
/**
 * @brief configure pin B0 as output pin
 * 
 */
#define SEAT_SWITCH_INPUT (DDRB|=(0<<SEAT_PIN))
/**
 * @brief configure pinB7 as input pin 
 * 
 */
#define HEATER_PIN_INPUT (DDRB|=(0<<HEATER_PIN))
/**
 * @brief configure pin B6 as input pin
 * 
 */
#define LED_IS_ON (PINB & (1<<LED_PIN))
/**
 * @brief check if led is on
 * 
 */

/**
 * Include files
 */ 

#include <avr/io.h>

/**
 * Function definitions
 * 
 */

void avr_init();
/**
 * @brief Function to initialise the input and output pins
 * 
 */

void activity1_loop();
/**
 * @brief Function to check if both seat and heater switches are on and indicate using the LED 
 *  
 */

void led_state(uint8_t state);
/**
 * @brief Function to turn on or turn off LED
 * 
 */

#endif