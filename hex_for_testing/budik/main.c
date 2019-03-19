/* bled */
#ifndef F_CPU
#define F_CPU 12000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>

int i=100;

int main(void)
{
DDRB=0b00111111;
DDRC=0b11100000;
DDRD=0b11111111;
while(1)
{
PORTB=0b00000010;_delay_ms(20);
PORTB=0b00000100;_delay_ms(20);
PORTB=0b00001000;_delay_ms(20);
PORTB=0b00010000;_delay_ms(20);
PORTB=0b00100000;_delay_ms(20);
PORTB=0b00010000;_delay_ms(20);
PORTB=0b00001000;_delay_ms(20);
PORTB=0b00000100;_delay_ms(20);
if (PINC & (1<<PC5)) {PORTD=0b00000001;_delay_ms(100);PORTD=0b00000000;}
if (PINC & (1<<PC4)) {PORTD=0b00000010;_delay_ms(100);PORTD=0b00000000;}
if (PINC & (1<<PC3)) {PORTD=0b00000100;_delay_ms(100);PORTD=0b00000000;}

//PORTD=0b00000001;_delay_ms(100);PORTD=0b00000000;_delay_ms(3000);

}
return(0);
}


