#include <avr/io.h>
#include <util/delay.h>

void InitPWM()
{
TCCR0|=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);

   //Set OC0 PIN as output. It is  PB3 on ATmega16 ATmega32

   DDRB|=(1<<PB2);
}
void SetPWMOutput(uint8_t duty)
{
   OCR0=duty;
}
void Wait()
{
 _delay_loop_2(3000);
}

void main()
{
   uint8_t brightness=0;

   //Initialize PWM Channel 0
   InitPWM();



  while(1)
   {
      //Now Loop with increasing brightness

      for(brightness=0;brightness<255;brightness++)
      {
         //Now Set The Brighness using PWM

         SetPWMOutput(brightness);

         //Now Wait For Some Time
         Wait();
      }

      //Now Loop with decreasing brightness

      for(brightness=255;brightness>0;brightness--)
      {
         //Now Set The Brighness using PWM

         SetPWMOutput(brightness);

         //Now Wait For Some Time
         Wait();
      }
   }
}
