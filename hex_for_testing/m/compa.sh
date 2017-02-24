avr-gcc -g -Os -mmcu=atmega8 -c /home/pi/c/m/main.c
avr-gcc -g -mmcu=atmega8 -o /home/pi/c/m/main.elf /home/pi/c/m/main.o
avr-objcopy -j .text -j .data -O ihex /home/pi/c/m/main.elf /home/pi/c/m/main.hex

avrdude -p m8 -c usbasp -e -U flash:w:/home/pi/c/m/main.hex
