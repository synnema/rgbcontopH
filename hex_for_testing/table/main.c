#ifndef F_CPU
#define F_CPU 12000000UL
#endif
#include <avr/io.h>
#include <stdlib.h>
#include <math.h>
#include <util/delay.h>

int main(void) {
PORTB=11111111;
DDRB=11111111;
PORTC=0x00;
DDRC=0x00;
PORTD=0x00;
DDRD=0x00;
TCCR0=0x00;
TCNT0=0x00;
TCCR1A=0xA1;
TCCR1B=0x09;
TCNT1H=0x00;
TCNT1L=0x00;
ICR1H=0x00;
ICR1L=0x00;
OCR1AH=0x00;

OCR1AL=0;

OCR1BH=0x00;

OCR1BL=0;

ASSR=0x00;
TCCR2=0x69;
TCNT2=0x00;

OCR2=0;

MCUCR=0x00;
TIMSK=0x00;
ACSR=0x80;
SFIOR=0x00;

while (1)
    {
OCR1AL=0;
OCR1BL=0;
  OCR2=0;        // we have a working Fast PWM

PORTB=0b00000001;_delay_ms(50);PORTB=0b00000000;

break;

//PORTD=0b10000000;
//_delay_ms(100000);
    }

}

