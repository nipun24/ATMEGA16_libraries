# ADC Library
There are two functions in the library. 
1. `adc_setup()` : Initialises the ADC for conversion. Must be called before any conversion tasks.
2. `adc_value(argument)` : This function returns the ADC value of the analog signal from the `argument` channel.

### Example
```c
//This example uses the LCD Library to display the output on the LCD display.
void main()
{
	DDRA = 0b00000000;
	DDRB = 0b11111111;
	lcd_setup();
	ADC_setup();	
	int x;
    while (1) 
    {
		lcd_address(0x01);
		x = ADC_value(2);
		lcd_address(0xcf);
		lcd_number_infinite(x);	
		_delay_ms(500);
    }
}
```