# LED Matrix Library

1. `#define` ROW_PORT and COL_PORT as output ports.
2. Call the alphabet you want to display in **CAPS**.
3. Pass argument `0` (for non scrolling) or `1` (for scrolling text).  
### Example
```c
#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>
#define ROW_PORT PORTA
#define COL_PORT PORTB 
#include <mylibrary/matrix.h>

void main()
{
	DDRA = 0xff;
	DDRB = 0xff;
	while(1)
	{
		A(0);
		B(1);
	}
}
```
