#include "activity1.h"

/**
 * @brief initialise the GPIO pins and assigned it as switches
 * 
 */
void initialise_gpiopins(void){
    DDRD &= ~(1<<PD3);  // input switch
    DDRD &= ~(1<<PD4);  // input switch
    DDRB |= (1<<PB1);   // output LED
}


/**
 * @brief Both the switches must be ON for the LED to glow
 * else the LED will be OFF.
 */
void act1(void){
    // IF BOTH SWITCHES ARE ON
    if(((PIND & (1<<PD3)) && (PIND & (1<<PD4))) == 1){
        PORTB |= (1<<PB1);  // LED SET
    }
    else{
        PORTB &= ~(1<<PB1); // LED CLEAR
    }
}
