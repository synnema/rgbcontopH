#!/bin/bash
echo "Content-type: text/html"
echo
avr-gcc -g -Os -mmcu=atmega8 -c /home/pi/c/rgbcont/main.c
avr-gcc -g -mmcu=atmega8 -o /home/pi/c/rgbcont/main.elf /home/pi/c/rgbcont/main.o
avr-objcopy -j .text -j .data -O ihex /home/pi/c/rgbcont/main.elf /home/pi/c/rgbcont/main.hex

avrdude -p m8 -c usbasp -e -U flash:w:/home/pi/c/rgbcont/main.hex
