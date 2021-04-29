#include "activity2.h"
/**
 * @brief initialise analog to digital converter
 * 
 */
void InitADC(){
ADMUX=(1<<REFS0);
ADCSRA=(1<<ADEN)|(7<<ADPS0);
}
/**
 * @brief Converting analog to digital
 * 
 * @param ch channel
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t ch){
      ADMUX&=0xf8;
      ch=ch&0b00000111;
      ADMUX|=ch;
      ADCSRA|=(1<<ADSC);
      while(!(ADCSRA & (1<<ADIF)));
      ADCSRA|=(1<<ADIF);
      return(ADC);
}
