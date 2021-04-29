/**
 * @file activity1.h
 * @author Nikhil Pothu(nikhilrocz44@gmail.com)
 * @brief Activity 1 to check if button sensor and heater is on
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED


#include <avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
/**
 * @brief Button on
 * 
 */
#define BUTTON_ON !(PINB&(1<<PB7))
/**
 * @brief Heater on
 * 
 */
#define HEATER_ON !(PINB&(1<<PB6))

/**
 * @brief Defining ports
 * 
 */
void port();

#endif // ACTIVITY1_H_INCLUDED
