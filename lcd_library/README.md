Define any port as the output. Show the example below.

#include<avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>
#define lcd PORTD
#include<mylibrary/lcd.h>

void main()
{
  DDRD = 0b11111111;
  lcd_setup();
  lcd_address(0x80);
  lcd_string("Hello!");
}
