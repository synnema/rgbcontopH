/*#define F_CPU 12000000UL*/
#ifndef F_CPU
#define F_CPU 12000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
PORTB=0x00;DDRB=0x0E;PORTC=0x00;DDRC=0x00;PORTD=0x00;DDRD=0x00;
TCCR0=0x00;TCNT0=0x00;TCCR1A=0xA1;TCCR1B=0x09;TCNT1H=0x00;TCNT1L=0x00;
ICR1H=0x00;ICR1L=0x00;OCR1AH=0x00;

OCR1AL=0;OCR1BH=0x00;
OCR1BL=0;ASSR=0x00;TCCR2=0x69;TCNT2=0x00;
OCR2=0;MCUCR=0x00;TIMSK=0x00;ACSR=0x80;SFIOR=0x00;

//int i=0;

DDRB=0b00111111;
DDRC=0b00000000;
while(1)
{
    if ((PINC & (1<<PC0)) && (PINC & (1<<PC2))) {OCR1AL=OCR1AL+1;_delay_ms(100);}
    if ((PINC & (1<<PC1)) && (PINC & (1<<PC2))) {OCR1AL=OCR1AL-1;_delay_ms(100);}
    if ((PINC & (1<<PC0)) && (PINC & (1<<PC3))) {OCR1BL=OCR1BL+1;_delay_ms(100);}
    if ((PINC & (1<<PC1)) && (PINC & (1<<PC3))) {OCR1BL=OCR1BL-1;_delay_ms(100);}
    if ((PINC & (1<<PC0)) && (PINC & (1<<PC4))) {OCR2=OCR2+1;_delay_ms(100);}
    if ((PINC & (1<<PC1)) && (PINC & (1<<PC4))) {OCR2=OCR2-1;_delay_ms(100);}
    //if ((PINC & (1<<PC0)) && (PINC & (1<<PC1)) && (PINC & (1<<PC2))) {OCR1AL=0;_delay_ms(100);_delay_ms(100);_delay_ms(100);}
    //if ((PINC & (1<<PC0)) && (PINC & (1<<PC1)) && (PINC & (1<<PC3))) {OCR1BL=0;_delay_ms(100);_delay_ms(100);_delay_ms(100);}
    //if ((PINC & (1<<PC0)) && (PINC & (1<<PC1)) && (PINC & (1<<PC4))) {OCR2=0;_delay_ms(100);_delay_ms(100);_delay_ms(100);}
    if ((PINC & (1<<PC0)) && (PINC & (1<<PC1))) {OCR1AL=0;OCR1BL=0;OCR2=0;}
    if ((PINC & (1<<PC3)) && (PINC & (1<<PC4))) {OCR1AL=255;OCR1BL=255;OCR2=255;}
}
return(0);
}
