#!/bin/bash
echo "Content-type: text/html"
echo
avr-gcc -g -Os -mmcu=atmega8 -c /home/pi/c/bledax/main.c
avr-gcc -g -mmcu=atmega8 -o /home/pi/c/bledax/main.elf /home/pi/c/bledax/main.o
avr-objcopy -j .text -j .data -O ihex /home/pi/c/bledax/main.elf /home/pi/c/bledax/main.hex

avrdude -p m8 -c usbasp -e -U flash:w:/home/pi/c/bledax/main.hex
