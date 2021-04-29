#include "activity3.h"
/**
 * @brief setting up timer1
 * 
 */

void peripheral_init()
{
    TCCR1A |=(1<<COM1A1) |(1<<WGM11) |(1<<WGM10);
    TCCR1B |=(1<<WGM12) | (1<<CS12);
    DDRB |=(1<<PB1);
}
/**
 * @brief function to generate wave form temperature sensor data
 * 
 * @param data 
 * @return char 
 */
char pulseWidthModulation(uint16_t data)
{
    char temp;
    /**
     * @brief 20% duty Cycle
     * 
     */
    if(data>=0b0 && data<= (0b11001000))
    {
        OCR1A= 205;
        temp=20;
        _delay_ms(20);

    }
    /**
     * @brief 40%duty cycle
     * 
     */
    else if(data>=(0b11010010) && data<=(0b111110100))
    {
        OCR1A= 500;
        temp=25;
        _delay_ms(20);

/**
 * @brief 70% duty cycle
 * 
 */
    }
    else if(data>=(0b111111110) && data <=(0b1010111100))
    {
        OCR1A= 700;
        temp=29;
        _delay_ms(20);

    }
    /**
     * @brief 95% duty cycle
     * 
     */
    else if(data>=710 && (data<=1024))
    {
        OCR1A= 1000;
        temp=33;
        _delay_ms(20);
    }
    else{
        OCR1A=0;
        temp=0;
    }
    return temp;
}
