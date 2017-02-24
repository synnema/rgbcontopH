/* rgbfor */
#ifndef F_CPU
#define F_CPU 12000000UL
#endif
#include <avr/io.h>
#include <stdlib.h>
#include <math.h>
#include <util/delay.h>

int main(void) {
PORTB=0x00;DDRB=0x0E;
PORTC=0x00;DDRC=0x00;
PORTD=0x00;DDRD=0x00;
TCCR0=0x00;TCNT0=0x00;
TCCR1A=0xA1;TCCR1B=0x09;TCNT1H=0x00;TCNT1L=0x00;
ICR1H=0x00;ICR1L=0x00;
OCR1AH=0x00;

OCR1AL=0;

OCR1BH=0x00;

OCR1BL=0;

ASSR=0x00;TCCR2=0x69;TCNT2=0x00;

OCR2=0;

MCUCR=0x00;TIMSK=0x00;ACSR=0x80;SFIOR=0x00;

int i=0;
int y=1;
int z=100;

while (1)
    {
    for(i=z;i<180;i=i+y) {OCR1AL=i;_delay_ms(60);}
    for(i=180;i>z;i=i-y) {OCR1AL=i;_delay_ms(60);}
    for(i=z;i<180;i=i+y) {OCR1BL=i;_delay_ms(60);}
    for(i=180;i>z;i=i-y) {OCR1BL=i;_delay_ms(60);}
    for(i=z;i<180;i=i+y) {OCR2=i;_delay_ms(60);}
    for(i=180;i>z;i=i-y) {OCR2=i;_delay_ms(60);}

//if (PINC & (1<<PC0)) {y=y+10;_delay_ms(1);}
//if (PINC & (1<<PC1)) {y=y-1;_delay_ms(1);}

//if (PINC & (1<<PC2)) {z=z+1;_delay_ms(1);}
//if (PINC & (1<<PC3)) {z=z-1;_delay_ms(1);}

//    for(i=0;i<255;i=i+2) {OCR1AL=i;_delay_ms(150);}
//    for(i=255;i>0;i=i-2) {OCR1AL=i;_delay_ms(150);}
//    for(i=0;i<255;i=i+2) {OCR1BL=i;_delay_ms(150);}
//    for(i=255;i>0;i=i-2) {OCR1BL=i;_delay_ms(150);}
//    for(i=0;i<255;i=i+2) {OCR2=i;_delay_ms(150);}
//    for(i=255;i>0;i=i-2) {OCR2=i;_delay_ms(150);}
//    for(i=0;i<255;i=i+2) {OCR1BL=i;_delay_ms(150);}
//    for(i=255;i>0;i=i-2) {OCR1BL=i;_delay_ms(150);}
    }

}

