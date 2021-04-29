#include "activity3.h"


void peripheral_init()
{
    TCCR1A |=(1<<COM1A1) |(1<<WGM11) |(1<<WGM10);
    TCCR1B |=(1<<WGM12) | (1<<CS12);
    DDRB |=(1<<PB1);
}
void pulseWidthModulation(uint16_t data)
{
    if(data>=0b0 && data<= (0b11001000))
    {
        OCR1A= 200;
        _delay_ms(400);

    }
    else if(data>=(0b11010010) && data<=(0b111110100))
    {
        OCR1A= 500;
        _delay_ms(400);

    }
    else if(data>=(0b111111110) && data <=(0b1010111100))
    {
        OCR1A= 700;
        _delay_ms(400);

    }
    else
    {
        OCR1A= 1000;
        _delay_ms(400);
    }
}
