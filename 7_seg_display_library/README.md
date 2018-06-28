# 7 Segment Display Library

1. `#include` the library in the header files.
2. `seven_segment(num)` returns a value, which can be given to any port as output.

**NOTE:**
The Library is designed for **common anode** 7 segment displays. But it can be used with common cathode as well(see in example).
### Example
```c
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
