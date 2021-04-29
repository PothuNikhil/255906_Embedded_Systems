/**
 * @file activity3.h
 * @author Nikhil Pothu(nikhilrocz44@gmail.com)
 * @brief Activity 3 to generate PWM
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY3_H_INCLUDED
#define ACTIVITY3_H_INCLUDED
#include <avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
/**
 * @brief defining ports
 * 
 */
void peripheral_init();
/**
 * @brief Generating PWM
 * 
 * @param data temperature data
 * @return char 
 */
char pulseWidthModulation(uint16_t data);

#endif // ACTIVITY3_H_INCLUDED
