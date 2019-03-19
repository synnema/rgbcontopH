/*#define F_CPU 12000000UL*/
#ifndef F_CPU
#define F_CPU 12000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
DDRB=0b00111111;
DDRC=0b01111111;
DDRD=0b11111111;
while(1)
{
PORTB=0b00000000;
PORTB=0b00000001;_delay_ms(10);
PORTB=0b00000000;
PORTD=0b10000000;_delay_ms(10);
PORTD=0b01000000;_delay_ms(10);
PORTD=0b00100000;_delay_ms(10);
PORTD=0b00000000;
PORTB=0b00000010;_delay_ms(10);
PORTB=0b00000100;_delay_ms(10);
PORTB=0b00001000;_delay_ms(10);
PORTB=0b00010000;_delay_ms(10);
PORTB=0b00100000;_delay_ms(10);
PORTB=0b00000000;_delay_ms(10);
PORTB=0b00100000;_delay_ms(10);
PORTB=0b00010000;_delay_ms(10);
PORTB=0b00001000;_delay_ms(10);
PORTB=0b00000100;_delay_ms(10);
PORTB=0b00000010;_delay_ms(10);
PORTD=0b00000000;
PORTD=0b00100000;_delay_ms(10);
PORTD=0b01000000;_delay_ms(10);
PORTD=0b10000000;_delay_ms(10);
PORTD=0b00000000;
PORTB=0b00000001;_delay_ms(10);
PORTB=0b00000000;
if (PINC & (1<<PC0)) {PORTB=0b00000001;_delay_ms(810);}
if (PINC & (1<<PC1)) {PORTB=0b00000010;_delay_ms(810);}
if (PINC & (1<<PC3)) {PORTB=0b00100000;_delay_ms(810);}
}
return(0);
}
