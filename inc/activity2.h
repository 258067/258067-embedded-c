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
 * Function Definitions
 */

void InitADC();

uint16_t ReadADC(uint8_t ch);

void activity2(void);

#endif