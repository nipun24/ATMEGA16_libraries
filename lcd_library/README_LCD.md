# LCD Library
`#define` any port as lcd output port.
1. `lcd_setup()` - initialise the LCD display.
2. `lcd_address(address)` - pass the address to the LCD display.
3. `lcd_data(character)` - pass single character to the LCD display.
4. `lcd_string(string)` - pass a string to the LCD Display.
5. `lcd_number(num)` - displays number on LCD. **only 2 digits**
6. `lcd_number_infinite(num)` - displays number on LCD. **any number of digits**
### Example
```c
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
```
