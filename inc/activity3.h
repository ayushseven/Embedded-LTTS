/**
 * @file activity3.h
 * @author ayushseven
 * @brief header for Activity 3
 * @version 0.1
 * @date 2021-07-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY3_H__
#define __ACTIVITY3_H__

#include <avr/io.h>
#include <util/delay.h>

void initialise_PWM(void);
void initialise_PWMpin(void);
void compare(void);

#endif
