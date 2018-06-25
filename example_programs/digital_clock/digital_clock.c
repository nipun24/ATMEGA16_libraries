//Digital clock using _delay_ms() function
#include<avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>
#define lcd PORTD
#include<mylibrary/lcd.h>   //lcd_library
void main()
{
    DDRD = 0b11111111;
    lcd_setup();
    lcd_address(0x80);
    lcd_string("DIGITAL CLOCK");
	while(1)
	{
        lcd_address(0xc2);
        lcd_string(":");
        lcd_address(0xc5);
        lcd_string(":");
		int h,m,s;
        for(h=0;h<=24;h++)
        {
            lcd_address(0xc1);
            lcd_number(h);
            for(m=0;m<=59;m++)
            {
                lcd_address(0xc4);
                lcd_number(m);
                for(s=0;s<=59;s++)
                {
                    lcd_address(0xc7);
                    lcd_number(s);
                    _delay_ms(100);
                }
            }
        }
    }
}
