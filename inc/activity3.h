#ifndef _ACTIVITY_3_H_
#define _ACTIVITY_3_H_
/**
 * @file activity1.h
 * @author Shreyus R D (shreyas.vasuki@gmail.com)
 * @brief Project to generate pwm output based on the ADC value
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Include files
 */ 
#include <avr/io.h>
#include<util/delay.h>
/**
 * Macro definitions
 */
#define NON_INVERTING (1<<COM1A1)
/**
 * @brief selecting non inverting mode of fast pwm
 * 
 */
#define PRESCALER_64 ((1<<CS11)|(1<<CS10))
/**
 * @brief setting prescaler to /64
 * 
 */
#define PWM_PIN_PB1 (DDRB|=(1<<PB1))

/**
 * Function definitions
 * 
 */
void initpwm();
/**
 * @brief initialise pwm pins
 * 
 */

void tempsenseout(uint16_t tempout);
/**
 * @brief Function to compare ADC values with different ranges and print the temperature
 * 
 */

#endif