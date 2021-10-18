/*	Author: Andrew Shim
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab # 5 Exercise # 0
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRB = 0xFF; PORTB = 0x00; // Configure port B's 8 pins as outputs
    /* Insert your solution below */
    while (1) {
	PORTB = 0x0F; // Writes port B's 8 pins with 00001111
    }
}
