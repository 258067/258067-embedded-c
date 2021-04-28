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
#define LED_PIN  (PORTB0) /* LED pin*/
#define SEAT_PORT (PORTB) /* SEAT port */
#define SEAT_PIN (PORTB6) /* SEAT pin */
#define HEATER_PORT (PORTB) /* HEATER port */
#define HEATER_PIN (PORTB7) /* HEATER pin */

/**
 * Include files
 */ 

#include <avr/io.h>

/**
 * Function Definitions
 */

void avr_init();

void activity1_loop();

void led_state(uint8_t state);

void activity1();


#endif