/**
 * @file activity2.h
 * @author ayushseven
 * @brief 
 * @version 0.1
 * @date 2021-07-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY2_H__
#define __ACTIVITY2_H__

#include <avr/io.h>     // header file for avr processors
#include <util/delay.h> // header for delay function

void initialise_ADC(void);    // initialize adc
uint16_t ReadADC(uint8_t ch);   // read the adc 
void initialise_ADCport(void);    // intialize adc pins
void actt2(void);   // implementation of activity 2 & 3

#endif
