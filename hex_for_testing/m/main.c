/* m */
#ifndef F_CPU
#define F_CPU 12000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
DDRB=0b00111111;DDRC=0b11100000;DDRD=0b11111111;
int h=21;int m=0;int s=2;
PORTD=0b00000001;_delay_ms(100);PORTD=0b00000000;
while(1)
{
if (PINC & (1<<PC5)) {PORTD=0b00000001;_delay_ms(100);PORTD=0b00000000;}
if (PINC & (1<<PC4)) {PORTD=0b00000010;_delay_ms(100);PORTD=0b00000000;}
if (PINC & (1<<PC3)) {PORTD=0b00000100;_delay_ms(100);PORTD=0b00000000;}
if (PINC & (1<<PC2)) {PORTD=0b00000101;_delay_ms(100);PORTD=0b00000000;}

//if (PINC & (1<<PC2)) {PORTD=0b10000000;_delay_ms(100);PORTD=0b00000000;
//_delay_ms(100);PORTD=0b10000000;_delay_ms(100);PORTD=0b00000000;_delay_ms(100);
//PORTD=0b10000000;_delay_ms(100);PORTD=0b00000000;h=21;m=0;s=5;}

//if (PINC & (1<<PC3)) {PORTD=0b00000100;_delay_ms(100);PORTD=0b00000000;}

//if (s>59) {m=m+1;s=0;}
//if (m>59) {h=h+1;m=0;}
//if (h>23) {h=0;m=0;s=0;}
//_delay_ms(1000);
//if ((h==20) && (m==45) && (s==1)) {PORTD=0b00000010;_delay_ms(150);PORTD=0b00000000;}
//if ((h==21) && (m==1) && (s==1))  {PORTD=0b00000001;_delay_ms(150);PORTD=0b00000000;}
//if ((h==21) && (m==16) && (s==1)) {PORTD=0b00000001;_delay_ms(150);PORTD=0b00000000;}
//if ((h==21) && (m==15) && (s==1)) {PORTD=0b00000010;_delay_ms(150);PORTD=0b00000000;}
//if ((h==17) && (m==35) && (s==30)) {PORTD=0b00000001;_delay_ms(150);PORTD=0b00000000;}
//if ((h==17) && (m==36) && (s==40)) {PORTD=0b00000100;_delay_ms(150);PORTD=0b00000000;}
//s=s+1;
}
return(0);
}


