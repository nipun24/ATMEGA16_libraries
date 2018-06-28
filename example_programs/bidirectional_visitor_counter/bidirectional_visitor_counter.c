#include<avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>
#define lcd PORTA
#include <lcd.h>
void main()
{
	DDRA = 0xff;
	DDRB = 0b11111100;
	PORTB = 0b0000011;
	lcd_setup();
	int c=0;
	while(1)
	{
		if((PINB & 0b00000001)==0)
		{
			while(PINB & 0b00000010);
			c++;
			lcd_address(0x8f);
			lcd_number_infinite(c);
			while(!(PINB & 0b00000010));
		}
		else if ((PINB & 0b00000010)==0)
		{
			while((PINB & 0b00000001));
			if(c==0)
			{
				c=0;
			}
			else
			{
				c--;
			}
			lcd_address(0x8f);
			lcd_number_infinite(c);
			while(!(PINB & 0b00000001));
		}
	}
}
