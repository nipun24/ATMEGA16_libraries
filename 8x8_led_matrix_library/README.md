Define PORTA and PORTB as output. An example program is shown below

#include<avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>
#include<mylibrary/matrix.h>

void main()
{
	DDRA = 0xff;
	DDRB = 0xff;
	while(1)
	{
		A();
		B();
	}
}
