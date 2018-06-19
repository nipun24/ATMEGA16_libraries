Call the function, and give it to PORTB as output.The Library is designed for common anode 7 segment displays.But it can be used with common cathode as well with just a little modification(shown in example).
Example code is shown below:


void main()
{
    DDRB = 0b11111111;
    while(1)
    {
        //for common anode 7 segment displays
        PORTB = seven_segment(i);
        _delay_ms(1000);

        //for common cathode 7 segment displays
        PORTB = ~seven_segment(i);
        _delay_ms(1000);
    }
}
