/*#define F_CPU 12000000UL*/
#ifndef F_CPU
#define F_CPU 12000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
DDRB=0b00111111;
DDRC=0b11100000;
while(1)
{
PORTB=0b00000010;_delay_ms(100);
PORTB=0b00000100;_delay_ms(100);
PORTB=0b00001000;_delay_ms(100);
PORTB=0b00010000;_delay_ms(100);
PORTB=0b00100000;_delay_ms(100);
PORTB=0b00010000;_delay_ms(100);
PORTB=0b00001000;_delay_ms(100);
PORTB=0b00000100;_delay_ms(100);
if (PINC & (1<<PC4)) {
PORTB=0b00000000;

}
}
return(0);
}
