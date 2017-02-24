#include <avr/io.h>
int main( void )
{
DDRB=0x08;
OCR2=0x80;
TCCR2=0x69;
while (1) {};
}
