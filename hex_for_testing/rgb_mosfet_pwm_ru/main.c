/*****************************************************

CVAVR V 2  скачать на www.AVR123.nm.ru


==============================  

Краткий курс - самоучитель микроконтроллеры AVR ATmega ATtiny 
и PIC для начинающих - www.AVR123.nm.ru

Запасные адреса - зеркала  - курса по AVR и PIC - proavr.narod.ru  и  pid.by.ru


Самые первые шаги с AVR.   Задать вопросы по AVR PIC  ARM в форуме

http://www.roboforum.ru/viewtopic.php?f=2&t=1070

"Язык Си для микроконтроллеров" - именно для МИКРОКОНТРОЛЛЕРОВ !!! а не для ПК как в книгах  - 
 читайте на стр.   avr123.nm.ru/05.htm  

==============================

Недорогие электронные компоненты можно заказать почтой  у Семенова Михаила -  http://mkpochtoi.narod.ru/price.htm

Можно прошить на заказ микроконтроллеры в том числе и для изготовления 
программаторов USB AVR910 USBASP PicKit2.

Программаторы готовые USB AVR910 USBASP PicKit2 очень недорого.


Вы можете заказать любые электронные компоненты по почте из  "Терраэлектроника" 
и любые товары из любых Московских магазинов - вам поможет Семонов Михаил 
и цена его услуг почти как доставка Терры по Москве. Он комплектует заказы 
и пассивными компонентами - чип резисторы, конденсаторы. 
Делает платы ЛУТ срочно изготвливает электронику на заказ недорого.      

http://mkpochtoi.narod.ru

==============================

     
писать и компилировать программу советую в компиляторе 
CodeVisinAVR - как с ним работать 

и где взять написано на стр.   avr123.nm.ru   

и в задачах  avr123.nm.ru/06.htm 

CVAVR  - тоже имеет отличные примеры и хелп. 

Перевод он-лайн   translate.ru     

; ************************************************************

Отлаживать программу удобно в маленьком симуляторе VMLAB   4.3 Mb всего 
( взять на www.avr123.nm.ru ) рассказано там:

avr123.nm.ru/z2.htm
avr123.nm.ru/z3.htm
avr123.nm.ru/z9.htm

дополнительная информация есть в хелпе и в примерах VMLAB

; ************************************************************

Еще посмотрите "супер-пупер" способ отладки устройств 
на МК - он описан там:  avr123.nm.ru/z4.htm

     
///////////////////////////////////////////////////////////////

  Мощнейший симулятор электроники и МК - PROTEUS  !!! 

  скачать  одним архивом все с инструкцие по установке   
 
  http://proteus123.narod.ru

==============================

КНИГИ скачать бесплатно по отдельности - библиотека в начале - www.AVR123.nm.ru

Сборка 187 книг  + диски CD c примерами из книг в торент-раздаче - льётся быстро.
http://torrents.ru/forum/viewtopic.php?t=1652142

==============================

AVR Studio 4.17 (build 666) Software (updated 2009-07)

http://www.atmel.com/dyn/general/tech_doc.asp?doc_id=12246

Список новых AVR - Tiny4, Tiny5, Tiny9, Tiny87, Tiny861A, Tiny2313A, Tiny4313, Mega16HVB, Mega16M1, Mega64M1, Mega64C1, Mega8U2, Mega16U2, Mega32U2, XMmega192D3, AT90SCR100, Mega128RFA1 и др.
  

AVR Studio 4.17 includes new device support and numerous overall enhancements;
Full AVR ONE! 8-bit support - both programming and debugging, AVR Battery Studio version 1.02, JTAGICE mkII command line SW with support for ELF production file format, and STK500 command line SW with support for ELF production file format. 


Chip type           : ATmega8
Program type        : Application
Clock frequency     : 1,000000 MHz
Memory model        : Small
External SRAM size  : 0
Data Stack size     : 256
*****************************************************/

#include <mega8.h>
#include <stdlib.h>
#include <math.h>
#include <delay.h>
float red, green, blue;                                              //now colors
unsigned int tred, tgreen, tblue;                           //tagert colors
float delta_red, delta_green, delta_blue;       //величина прибавки за шаг
unsigned int time;                                                   //длительность шага


void generate_tagert_color(void)
{
      tred = rand();
      tgreen = rand();
      tblue = rand();
      tred = tred & 0xFF;          //to max 255
      tgreen = tgreen & 0xFF;
      tblue = tblue & 0xFF;
};

void delay(unsigned int delayt)               //задержка delay_ms() на вход принимает только константу( 
{
  while (delayt != 0)
  {
    delay_ms(1);
    delayt--;
  };
};

void main(void)
{

unsigned int temp1, temp2, temp3, temp4;

// Input/Output Ports initialization
// Port B initialization
// Func7=In Func6=In Func5=In Func4=In Func3=Out Func2=Out Func1=Out Func0=In 
// State7=T State6=T State5=T State4=T State3=0 State2=0 State1=0 State0=T 
PORTB=0x00;
DDRB=0x0E;

// Port C initialization
// Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
// State6=T State5=T State4=T State3=T State2=T State1=T State0=T 
PORTC=0x00;
DDRC=0x00;

// Port D initialization
// Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
// State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=T 
PORTD=0x00;
DDRD=0x00;

// Timer/Counter 0 initialization
// Clock source: System Clock
// Clock value: Timer 0 Stopped
TCCR0=0x00;
TCNT0=0x00;

// Timer/Counter 1 initialization
// Clock source: System Clock
// Clock value: 1000,000 kHz
// Mode: Fast PWM top=00FFh
// OC1A output: Non-Inv.
// OC1B output: Non-Inv.
// Noise Canceler: Off
// Input Capture on Falling Edge
// Timer 1 Overflow Interrupt: Off
// Input Capture Interrupt: Off
// Compare A Match Interrupt: Off
// Compare B Match Interrupt: Off
TCCR1A=0xA1;
TCCR1B=0x09;
TCNT1H=0x00;
TCNT1L=0x00;
ICR1H=0x00;
ICR1L=0x00;
OCR1AH=0x00;
OCR1AL=0x00;
OCR1BH=0x00;
OCR1BL=0x00;

// Timer/Counter 2 initialization
// Clock source: System Clock
// Clock value: 1000,000 kHz
// Mode: Fast PWM top=FFh
// OC2 output: Non-Inverted PWM
ASSR=0x00;
TCCR2=0x69;
TCNT2=0x00;
OCR2=0x00;

// External Interrupt(s) initialization
// INT0: Off
// INT1: Off
MCUCR=0x00;

// Timer(s)/Counter(s) Interrupt(s) initialization
TIMSK=0x00;

// Analog Comparator initialization
// Analog Comparator: Off
// Analog Comparator Input Capture by Timer/Counter 1: Off
ACSR=0x80;
SFIOR=0x00;

srand(1);             //инициализируем рандомайзер этим значением


while (1)
      {
            
       do 
       {
        generate_tagert_color();
        temp1 = (abs(tred - tgreen));
        temp2 = (abs(tred - tblue));
        temp3 = (abs(tgreen - tblue));
       }
       while (( temp1 < 150 ) && (temp2 < 150) && (temp3 < 150));  //если все цвета будут примерно равные то будет белый что не интересно
      
       if (rand() < 13100)                                         //c вероятностью 0,4 (32767) вышибаем один цвет
       {
         do
         {
            temp4 = rand() & 0x000F ;
         }
        while ((temp4 == 0) || (temp4 > 3));
       
        if (temp4 == 1)                                            //не повезло красному
        {                                                          //гасим до 0 - 20% от исходного
          do
           {
             temp4 = rand() & 0x0FFF;
           }
          while ((temp4 == 0) || (temp4 > 3276));
          
          tred = ceil ((float) (temp4 / 32767) * tred);
        };
        
        if (temp4 == 2)
        {
          do
           {
             temp4 = rand() & 0x0FFF;
           }
          while ((temp4 == 0) || (temp4 > 3276));
          
          tgreen = ceil ((float) (temp4 / 32767) * tgreen);
        };
        
        if (temp4 == 3)
        {
          do
           {
             temp4 = rand() & 0x0FFF;
           }
          while ((temp4 == 0) || (temp4 > 3276));
          
          tblue = ceil ((float) (temp4 / 32767) * tblue);
        };
        
       }
       
 
																	//значение прибавки. доходим до нужного цвета за 255 шагов
       delta_red = (float) (tred - red) / 255;
       delta_green = (float) (tgreen - green) / 255;
       delta_blue = (float) (tblue - blue) / 255; 
      
       
       do
        {
          temp4 = rand() & 0x00FF;
        }
       while ((temp4 < 50) || (temp4 > 100));                    	//скокрость перехода случайна от 5 до 10с
      
       time = ceil( ((float) temp4 / 255) * 10);              		//задержка должна быть целой
       
            
       do 
       {
        if (tred != ceil(red))
         red = red + delta_red;
        if (tgreen != ceil(green))
         green = green + delta_green;
        if (tblue != ceil(blue))
         blue = blue + delta_blue;
       
        OCR1A = ceil(blue);
        OCR1B = ceil(green);
        OCR2 = ceil(red);
      
        delay(time);
       }
       while ((tred != ceil(red)) || (tgreen != ceil(green)) || (tblue != ceil(blue))); 
       
       delay(time * 255);               							//стремились к этому цвету, задержим его
        
      
      };     
}
