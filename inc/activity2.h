#ifndef _ACTIVITY_2_H_
#define _ACTIVITY_2_H_
/**
 * @file activity2.h
 * @author Shreyus R D (shreyas.vasuki@gmail.com)
 * @brief Project to implement a heater knob
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Include files
 * 
 */

#include <avr/io.h>
#include <util/delay.h>
/**
 * Macro definitions
 */
#define SET_REFERENCE (ADMUX=(1<<REFS0))
/**
 * @brief set reference voltage
 * 
 */
#define ENABLE_ADC (1<<ADEN)
/**
 * @brief Enable ADC
 * 
 */
#define PRESCALER (7<<ADPS0)
/**
 * @brief set prescaler(Fcpu/128)
 * 
 */
#define CONVERSION_NOT_COMPLETE (!(ADCSRA & (1<<ADIF)))
/**
 * @brief Wait till conversion is complete
 * 
 */
#define CLEAR_ADIF (ADCSRA|=(1<<ADIF))
/**
 * @brief clear ADIF after conversion is complete
 * 
 */

/**
 * Function Definitions
 */

void InitADC();
/**
 * @brief function to initialise the ADC pins
 * 
 */

uint16_t ReadADC(uint8_t ch);
/**
 * @brief Function to convert the analog input to digital output and return the value stored in ADC register
 * 
 */

#endif