#!/bin/bash
echo "Content-type: text/html"
echo
avr-gcc -g -Os -mmcu=atmega8 -c main.c
avr-gcc -g -mmcu=atmega8 -o main.elf main.o
avr-objcopy -j .text -j .data -O ihex main.elf main.hex

avrdude -p m8 -c usbasp -e -U flash:w:main.hex
