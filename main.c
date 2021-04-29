/*
 */

#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

unsigned volatile FLAG=0;
unsigned volatile FLAG1=0;
ISR(INT0_vect){
    FLAG=1;
}
ISR(INT1_vect){
    FLAG1=1;
}
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

        if(FLAG==1){
            if(FLAG1==1){
                PORTB|=(1<<PB0);
                while(1){
                   temp=ReadADC(0);
                   pulseWidthModulation(temp);
                   USARTWriteChar(temp);
                }

                _delay_ms(500);
                FLAG1=0;
            }
            FLAG=0;
        }
        else{
            PORTB&=~(1<<PB0);
                _delay_ms(500);
        }
    }

    return 0;
}
