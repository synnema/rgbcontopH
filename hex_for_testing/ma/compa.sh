echo "Content-type: text/html"
echo
avr-gcc -g -Os -mmcu=atmega8 -c /home/pi/c/ma/main.c
avr-gcc -g -mmcu=atmega8 -o /home/pi/c/ma/main.elf /home/pi/c/ma/main.o
avr-objcopy -j .text -j .data -O ihex /home/pi/c/ma/main.elf /home/pi/c/ma/main.hex

avrdude -p m8 -c usbasp -e -U flash:w:/home/pi/c/ma/main.hex
