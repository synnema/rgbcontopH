#include <avr/io.h>
int main( void )
{
DDRB=0x08;
OCR2=0x1A; // 256/10=25,6 26 in hex = 1A;
TCCR2=0x6E; // 256 prescaler

while (1) {};
}
