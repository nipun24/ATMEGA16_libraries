# Keypad Library
This is a return type function. Call `keypad()`, and it will return the value of the pressed key.
**NOTE**
The `keypad_calc()` function is specifically made for the [calculator program](https://github.com/nipun24/ATMEGA16_libraries/blob/master/example_programs/calculator/calculator.c).
### Example
```c
//this example also uses the lcd library to show the pressed key on the LCD.
#define ROW_PORT PORTD  //any port can be used, but should be connected to the row
#define COL_PORT PINC   //any port can be used, but should be connected to the coloumn
#include<mylibrary/keypad.h>
void main()
{
	DDRA = 0b11111111;
	DDRC = 0b11110000;
	PORTC = 0b00001111;
	DDRD = 0b11111111;
	lcd_setup();
	lcd_address(0x80);
	while(1)
	{
        lcd_data(keypad());
	}
	
}
```