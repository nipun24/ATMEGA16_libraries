Define PORTB as output, connect the 7 segment display accordingly.
Example code is shown below:

void main()
{
    DDRB = 0b11111111;
    while(1)
    {
        seven_segment(i);
    }
}