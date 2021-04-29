/**
 * @file activity2.h
 * @author Nikhil Pothu
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED
#include <avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
/**
 * @brief setting up ADC ports
 * 
 */
void InitADC();
/**
 * @brief to perform ADC
 * 
 * @param ch channel
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t ch);

#endif // ACTIVITY2_H_INCLUDED
