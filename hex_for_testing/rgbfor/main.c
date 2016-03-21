/* rgbfor */
#ifndef F_CPU
#define F_CPU 12000000UL
#endif
#include <avr/io.h>
#include <stdlib.h>
#include <math.h>
#include <util/delay.h>
int main(void) {
PORTB=0x00;DDRB=0x0E;PORTC=0x00;DDRC=0x00;PORTD=0x00;DDRD=0x00;TCCR0=0x00;TCNT0=0x00;
TCCR1A=0xA1;TCCR1B=0x09;TCNT1H=0x00;TCNT1L=0x00;ICR1H=0x00;ICR1L=0x00;OCR1AH=0x00;
OCR1BH=0x00;ASSR=0x00;TCCR2=0x69;TCNT2=0x00;MCUCR=0x00;
TIMSK=0x00;ACSR=0x80;SFIOR=0x00;
//int i=1;int z=0;int y=10;int x=255;int u=200;v=200;f=20;t=0;

PORTD=0b00000000;
OCR1AL=250;OCR1BL=150;OCR2=250;
while (1) {
// tlačítka pro rgb - akvárium

//OCR1AL=200;
//OCR1BL=200;
//OCR2=220;
    if (PIND & (1<<PD2)) {OCR1AL=OCR1AL+1;OCR1BL=OCR1BL+1;OCR2=OCR2+1;_delay_ms(50);}

//    if ((PIND & (1<<PD1)) && (PIND & (1<<PD3))) {OCR1AL=OCR1AL+1;_delay_ms(200);_delay_ms(200);_delay_ms(200);_delay_ms(200);}
    if (PIND & (1<<PD3)) {OCR1AL=OCR1AL-1;_delay_ms(50);}
//    if ((PIND & (1<<PD2)) && (PIND & (1<<PD4))) {OCR1BL=OCR1BL+1;_delay_ms(200);_delay_ms(200);_delay_ms(200);_delay_ms(200);}
    if (PIND & (1<<PD4)) {OCR1BL=OCR1BL-1;_delay_ms(50);}
//    if ((PIND & (1<<PD2)) && (PIND & (1<<PD6))) {OCR2=OCR2+1;_delay_ms(200);_delay_ms(200);_delay_ms(200);_delay_ms(200);}
    if (PIND & (1<<PD6)) {OCR2=OCR2-1;_delay_ms(50);}
    //if ((PINC & (1<<PC0)) && (PINC & (1<<PC1)) && (PINC & (1<<PC2))) {OCR1AL=0;_delay_ms(100);_delay_ms(100);_delay_ms(100);}
    //if ((PINC & (1<<PC0)) && (PINC & (1<<PC1)) && (PINC & (1<<PC3))) {OCR1BL=0;_delay_ms(100);_delay_ms(100);_delay_ms(100);}
    //if ((PINC & (1<<PC0)) && (PINC & (1<<PC1)) && (PINC & (1<<PC4))) {OCR2=0;_delay_ms(100);_delay_ms(100);_delay_ms(100);}
    if ((PIND & (1<<PD1)) && (PIND & (1<<PD2))) {OCR1AL=0;OCR1BL=0;OCR2=0;}
    if ((PIND & (1<<PD4)) && (PIND & (1<<PD6))) {OCR1AL=255;OCR1BL=255;OCR2=255;}

if (OCR1AL<1) {OCR1AL=1;}
if (OCR1BL<1) {OCR1BL=1;}
if (OCR2<1) {OCR2=1;}
if (OCR1AL>254) {OCR1AL=2541;}
if (OCR1BL>254) {OCR1BL=254;}
if (OCR2>254) {OCR2=254;}

//for(i=z;i<x;i=i+y) {OCR1AL=i;_delay_ms(500);}
//for(i=x;i>u;i=i-y) {OCR1AL=i;_delay_ms(500);}


// také podivný program pro barevné změny

//OCR1AL=255;OCR1BL=255;OCR2=100;
//    for(i=z;i<x;i=i+y) {OCR1AL=i;_delay_ms(500);}
//_delay_ms(100000);
//    for(i=x;i>u;i=i-y) {OCR1AL=i;_delay_ms(500);}
//_delay_ms(100000);
//    for(i=z;i<x;i=i+y) {OCR1BL=i;_delay_ms(500);}
//_delay_ms(100000);
//    for(i=x;i>v;i=i-y) {OCR1BL=i;_delay_ms(500);}
//_delay_ms(100000);
//    for(i=t;i<x;i=i+y) {OCR2=i;_delay_ms(500);}
//_delay_ms(100000);
//    for(i=x;i>f;i=i-y) {OCR2=i;_delay_ms(500);}
//z=200;t=20;//_delay_ms(100000);


// postupné stmívání za hodiny na konec programu a break => vypnutí
// nebo odpojení napětí pro náběh rozednívání a denního chodu

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

