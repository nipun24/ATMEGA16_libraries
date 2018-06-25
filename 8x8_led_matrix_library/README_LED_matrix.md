# LED Matrix Library

1. **IMPORANT:** Define PORTA and PORTB as output.
2. Call the alphabet you want to display in **CAPS**. 
### Example
```c
#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>
#include <mylibrary/matrix.h>

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
```
