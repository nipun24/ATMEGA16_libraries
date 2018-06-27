# UART Library
UART (Universal Asynchronous Receiver-Transmitter) Library for ATmega16. Communication is done from the RX and TX pin of port D. 
### Example
The following example displays the data received on the LCD. 
```c
/*
1. Following three lines must be written. You can change the values according to your need.
2. The LCD library is also used in this code to display the output in the LCD.
*/
#define BAUD_RATE 9600UL
#define UBRR_VALUE ((F_CPU/(16UL*BAUD_RATE))-1)
#include <uart.h>

void main()
{
	DDRA = 0xff;
	lcd_setup();
	uart_setup();
	lcd_address(0x80);
	unsigned char x=0;
    while (1) 
    {
		x = uart_rec();
		lcd_data(x);
    }
}
```