#ifndef ACTIVITY3_H_INCLUDED
#define ACTIVITY3_H_INCLUDED
#include <avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
/**
 * @brief setting up ports
 * 
 */
void peripheral_init();
/**
 * @brief to generate PWM
 * 
 * @param data temperature data
 */
void pulseWidthModulation(uint16_t data);

#endif // ACTIVITY3_H_INCLUDED
