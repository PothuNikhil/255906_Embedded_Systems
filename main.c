/**
 * @file main.c
 * @author Nikhil Pothu (nikhilrocz44@gmail.com)
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
char temp_data;
    // Insert code

    while(1)
    {

        /**
         * @brief if condition to check whether two switches are on
         * 
         */
        if(BUTTON_ON){
            if(HEATER_ON){
                    _delay_ms(20);
                    /**
                 * @brief LED on
                 * 
                 */
                PORTB|=(1<<PB0);
                    /**
                     * @brief reading temperature data and performing ADC
                     * 
                     */
                   temp=ReadADC(0);
                     /**
                    * @brief Construct a new pulse Width Modulation object
                    * 
                    */
                   temp_data=pulseWidthModulation(temp);
                   /**
                    * @brief Construct a new USARTWriteChar object
                    * 
                    */
                   USARTWriteChar(temp_data);

                _delay_ms(20);

            }
            else{
                /**
             * @brief LED off
             * 
             */
            PORTB&=~(1<<PB0);
            OCR1A=0;
                _delay_ms(20);
        }

        }
        else{
            /**
             * @brief LED off
             * 
             */
            PORTB&=~(1<<PB0);
            OCR1A=0;
                _delay_ms(20);
        }
    }

    return 0;
}
