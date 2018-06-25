//This method does not use PWM for speed control. The speed control is achieved using simple _delay_ms() function.
#include<avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>
void main()
{
	DDRB = 0b11111111;
	while(1)
	{
		PORTB = 0b00001001;
		_delay_ms(1);           //motor on for 1ms
		PORTB = 0b00000000;
		_delay_ms(10);          //motor off for 10ms
	}
}
