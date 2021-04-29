/**
 * @file activity4.h
 * @author Nikhil Pothu(nikhilrocz44@gmail.com)
 * @brief Activity 4 to commuicate using UART
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED

#include <avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>

void USARTInit(uint16_t val);
char USARTReadChar();
void USARTWriteChar(uint16_t data);


#endif // ACTIVITY4_H_INCLUDED
