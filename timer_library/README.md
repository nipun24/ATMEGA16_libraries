# Timer Library
1. Normal Mode
2. CTC Mode
3. PWM Mode
## Normal Mode
**Example:**
```c
#include <avr/interrupt.h>
#include <timer.h>
void main()
{
    timer_normal();
    sei();
    while(1)
    {
        if(sec==30)
            PORTB = 0xff;
        if(min==1)
            PORTB = 0x00;
    }
}
```
##CTC Mode
**Example:**
```c
void main()
{
	DDRB = (1<<PB3);
	timer_ctc();
	while (1)
	{
		OCR0 = 50;
		_delay_ms(500);
		OCR0 = 200;
		_delay_ms(500);
	}
}
```
##PWM Mode
**Example:**
```c
void main()
{
    DDRB = (1<<PB3);
	timer_pwm();
	int i;
	while (1)
	{
		for (i=0;i<255;i++)
		{
			OCR0 = i;
			_delay_ms(20);
		}
	}
}
```