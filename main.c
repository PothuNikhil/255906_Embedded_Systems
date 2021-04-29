/**
 * @file main.c
 * @author NIKHIL POTHU (nikhilrocz44@gmail.com)
 * @brief Embedded C project
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

unsigned volatile FLAG=0;
unsigned volatile FLAG1=0;
/**
 * @brief Construct a new ISR object
 * 
 */
ISR(INT0_vect){
    FLAG=1;
}
/**
 * @brief Construct a new ISR object
 * 
 */
ISR(INT1_vect){
    FLAG1=1;
}
/**
 * @brief main 
 * 
 * @return int 
 */
int main(void)
{
port();
InitADC();
uint16_t temp;
peripheral_init();
USARTInit(103);
    // Insert code

    while(1)
    {
        /**
         * @brief if condition to check whether two switches are on
         * 
         */
        if(FLAG==1){
            if(FLAG1==1){
                /**
                 * @brief LED on
                 * 
                 */
                PORTB|=(1<<PB0);
                while(1){
                    /**
                     * @brief reading temperature data and performing ADC
                     * 
                     */
                   temp=ReadADC(0);
                   /**
                    * @brief Construct a new pulse Width Modulation object
                    * 
                    */
                   pulseWidthModulation(temp);
                   /**
                    * @brief Construct a new USARTWriteChar object
                    * 
                    */
                   USARTWriteChar(temp);
                }

                _delay_ms(500);
                FLAG1=0;
            }
            FLAG=0;
        }
        else{
            /**
             * @brief LED off
             * 
             */
            PORTB&=~(1<<PB0);
                _delay_ms(500);
        }
    }

    return 0;
}
