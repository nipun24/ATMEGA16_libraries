void lcd_address(unsigned char addr)    //function to give lcd's display address
{
    lcd = addr & 0xf0;
    lcd|= 0b00000100;
    _delay_ms(1);
    lcd&= 0xf0;
    _delay_ms(1);
    lcd = (addr<<4) & 0xf0;
    lcd|= 0b00000100;
    _delay_ms(1);
    lcd&=0xf0;
    _delay_ms(1);
}
void lcd_data(unsigned char data)   //function to give the display data 
{
    lcd = data & 0xf0;
    lcd|= 0b00000101;
    _delay_ms(1);
    lcd&= 0xf1;
    _delay_ms(1);
    lcd = (data<<4) & 0xf0;
    lcd|= 0b00000101;
    _delay_ms(1);
    lcd&= 0xf1;
    _delay_ms(1);
}
void lcd_setup()    //initial setup for lcd
{
    lcd_address(0x02);  //for home position
    lcd_address(0x28);  //4-bit mode, use 0x38 for 8 bit mode
    lcd_address(0x0c);  //cursor off
    lcd_address(0x06);  //auto increment mode, use 0x04 for auto decrement
}
void lcd_string(unsigned char *str) //print string on lcd
{
    char i=0;
    while(str[i]!='\0')
    {
        lcd_data(str[i]);
        i++;
    }
}
void lcd_number(unsigned int val)   //print number - 2 digit
{
    unsigned int a;
    lcd_address(0x04);
    a = val%10;
    lcd_data(a+48);
    val = val/10;
    a = val%10;
    lcd_data(a+48);
    lcd_address(0x06);
}
void lcd_number_infinite(unsigned long int val) //print number - any digit
{
    unsigned long int a;
    lcd_address(0x04);
    if(val==0)
        lcd_data(48);
    while(val!=0)
    {
        a = val%10;
        lcd_data(a+48);
        val = val/10;
    }
    lcd_address(0x06);
}