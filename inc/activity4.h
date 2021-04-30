#ifndef _ACTIVITY_4_H_
#define _ACTIVITY_4_H_
/**
 * @file activity4.h
 * @author Shreyus R D (shreyas.vasuki@gmail.com)
 * @brief Project to display the temperature
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Include files
 */ 

#include<avr/io.h>
#include<util/delay.h>

/**
 * Function definitions
 * 
 */

void init_print(uint16_t ubrr);

char read();

void write_char(char data);

#endif