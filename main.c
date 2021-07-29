/**
 * @file main.c
 * @author ayushseven
 * @brief 
 * @version 0.1
 * @date 2021-07-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

/**
 * @brief The main file to integrate all activities 
 * 
 * @return int 
 */
int main(void){
    initialise_gpiopins();
    while(1){

        act1();    // Activity 1: GPIO interfacing
        act2();    // Activity 2 and 3: ADC and PWM interfacing
        act3();    // Activity 4: USART interfacing
        
    }
    return 0;
}
