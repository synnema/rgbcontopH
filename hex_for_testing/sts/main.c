/*#define F_CPU 12000000UL*/
#ifndef F_CPU
#define F_CPU 12000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
DDRB=0b00111111;
int i=0;
while(1)
{
PORTB=0b00000010;
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);

PORTB=0b00000110;
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);

PORTB=0b00000000;
break;
}
}

