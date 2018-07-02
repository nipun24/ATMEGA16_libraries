void uart_setup()
{
	UBRRL = UBRR_VALUE;
	UBRRH = (UBRR_VALUE>>8);
    /*
    TXEN = 1 and RXEN = 1, enabling UART
    */
	UCSRB = (1<<TXEN)|(1<<RXEN);
    /*
    1. URSEL = 1, data will be stored in UBRRL first. Low-->High storing.
    2. UCSZ1 = 1 and UCSZ0 = 1, for 8-bit data as atmega16 is a 8 bit processor.
    */
	UCSRC = (1<<URSEL)|(1<<UCSZ1)|(1<<UCSZ0);
}

void uart_send(unsigned char data)
{
	while(!(UCSRA & (1<<UDRE)));
	UDR = data;
}

unsigned char uart_rec()
{
	while(!(UCSRA & (1<<RXC)));
	return UDR;
}

void uart_string_send(unsigned char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		uart_send(str[i]);
		i++;
	}
}