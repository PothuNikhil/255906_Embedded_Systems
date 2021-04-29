#include "activity4.h"
/**
 * @brief initialise UART serial communication
 * 
 * @param val 
 */
void USARTInit(uint16_t val){
    UBRR0L=val;
    UBRR0H=(val>>8)&(0x00ff);
    UCSR0C=(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);

    UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}
/**
 * @brief to read characters  
 * 
 * @return char 
 */
char USARTReadChar(){
    while(!(UCSR0A & (1<<RXC0)))
    {

    }
    return UDR0;
}
/**
 * @brief to write characters
 * 
 * @param data 
 */
void USARTWriteChar(uint16_t data){
    while(!(UCSR0A & (1<<UDRE0))){

    }
    UDR0=data;
}
