/* test 7 seg disp */
#ifndef F_CPU
#define F_CPU 12000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
DDRB=0b00000000;DDRC=0b00111111;DDRD=0b11111111;
while(1)
{
PORTD=0b01111110;_delay_ms(100);
PORTD=0b00110000;_delay_ms(100);
PORTD=0b01101101;_delay_ms(100);
PORTD=0b01111001;_delay_ms(100);
PORTD=0b00110011;_delay_ms(100);
PORTD=0b01011011;_delay_ms(100);
PORTD=0b01011111;_delay_ms(100);
PORTD=0b01110000;_delay_ms(100);
PORTD=0b01111111;_delay_ms(100);
PORTD=0b01111011;_delay_ms(100);
}
return(0);
}


