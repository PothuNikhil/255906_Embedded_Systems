#include "activity4.h"
void USARTInit(uint16_t val){
    UBRR0L=val;
    UBRR0H=(val>>8)&0x00ff;
    UCSR0C=(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);

    UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}
char USARTReadChar(){
    while(!(UCSR0A & (1<<RXC0)))
    {

    }
    return UDR0;
}
void USARTWriteChar(uint16_t data){
    while(!(UCSR0A & (1<<UDRE0))){
        if(data>=0b0 && data<= (0b11001000))
        {
            data= 20;
            _delay_ms(400);

        }
        else if(data>=(0b11010010) && data<=(0b111110100))
        {
            data= 25;
            _delay_ms(400);

        }
        else if(data>=(0b111111110) && data <=(0b1010111100))
        {
            data= 29;
            _delay_ms(400);

        }
        else
        {
            data= 33;
            _delay_ms(400);
        }
    }
    UDR0=data;
}
