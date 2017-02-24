/* lampa */
#ifndef F_CPU
#define F_CPU 12000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
DDRB=0b00111111;DDRC=0b11100000;DDRD=0b11111111;
int h=17;int m=9;int s=0;
while(1)
{
//PORTB=0b00000010;_delay_ms(20);PORTB=0b00000100;_delay_ms(20);
//PORTB=0b00001000;_delay_ms(20);PORTB=0b00010000;_delay_ms(20);
//PORTB=0b00100000;_delay_ms(20);PORTB=0b00010000;_delay_ms(20);
//PORTB=0b00001000;_delay_ms(20);PORTB=0b00000100;_delay_ms(20);
if (PINC & (1<<PC5)) {PORTD=0b00000001;_delay_ms(100);PORTD=0b00000000;}
if (PINC & (1<<PC4)) {PORTD=0b00000010;_delay_ms(100);PORTD=0b00000000;}
if (PINC & (1<<PC3)) {PORTD=0b00000100;_delay_ms(100);PORTD=0b00000000;}
//if (i==1) {PORTD=0b00000100;_delay_ms(100);PORTD=0b00000000;i=i++;}
if (s>59) {m=m++;s=0;}
if (m>59) {h=h++;m=0;}
if (h>23) {h=0;m=0;s=0;}
_delay_ms(1001);
if ((h==20) && (m==50) && (s==0))  {PORTD=0b00000000;_delay_ms(100);PORTD=0b00000000;}      //start maliny a synchron času
if ((h==21) && (m==10) && (s==0))  {PORTD=0b00000000;_delay_ms(100);PORTD=0b00000000;}      //zastavení maliny 
if ((h==17) && (m==11) && (s==0))  {PORTD=0b00000001;_delay_ms(100);PORTD=0b00000000;}
if ((h==17) && (m==11) && (s==20))  {PORTD=0b00000001;_delay_ms(100);PORTD=0b00000000;}
if ((h==17) && (m==12) && (s==0))  {PORTD=0b00000101;_delay_ms(100);PORTD=0b00000000;}
if ((h==17) && (m==12) && (s==20))  {PORTD=0b00000001;_delay_ms(100);PORTD=0b00000000;}
if ((h==17) && (m==12) && (s==30))  {PORTD=0b00000100;_delay_ms(100);PORTD=0b00000000;}
s=s++;
//PORTD=0b00000001;_delay_ms(100);PORTD=0b00000000;_delay_ms(3000);
}
return(0);
}


