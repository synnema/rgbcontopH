#include <avr/io.h>
#include <util/delay.h>

int main(void) {

  DDRD = 1;
  while (1) {
    PORTD ^= 1;
    _delay_ms(300);

        }


  return 0;

}
