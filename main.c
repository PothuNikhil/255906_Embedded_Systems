/*
 */

#include <avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>

unsigned volatile FLAG=0;
unsigned volatile FLAG1=0;
int main(void)
{
port();


    // Insert code

    while(1)
    {
        if(FLAG==1){
            if(FLAG1==1){
                PORTB|=(1<<PB0);
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

ISR(INT0_vect){
    FLAG=1;
}
ISR(INT1_vect){
    FLAG1=1;
}


