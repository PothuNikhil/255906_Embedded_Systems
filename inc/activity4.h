#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED

#include <avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
/**
 * @brief to setup baud rate
 * 
 * @param val UBRG
 */

void USARTInit(uint16_t val);
/**
 * @brief to read character
 * 
 * @return char 
 */
char USARTReadChar();
/**
 * @brief to print data
 * 
 * @param data temperature data
 */
void USARTWriteChar(uint16_t data);


#endif // ACTIVITY4_H_INCLUDED
