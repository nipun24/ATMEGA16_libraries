unsigned char keypad_calc()
{
    while(1)
    {
        ROW_PORT = 0b00011110;
        _delay_ms(5);
        if((COL_PORT & 0b00000001)==0)
        {
			while(!(COL_PORT & 0b00000001));
            return '7';
        }
		else if((COL_PORT & 0b00000010)==0)
        {
            while(!(COL_PORT & 0b00000010));
            return '8';
        }	
		else if((COL_PORT & 0b00000100)==0)
        {
            while(!(COL_PORT & 0b00000100));
            return '9';
        }
		else if((COL_PORT & 0b00001000)==0)
        {
            while(!(COL_PORT & 0b00001000));
            return '/';
        }
		ROW_PORT = 0b00011101;
		_delay_ms(5);
		if((COL_PORT & 0b00000001)==0)
        {
			while(!(COL_PORT & 0b00000001));
            return '4';
        }
		else if((COL_PORT & 0b00000010)==0)
        {
            while(!(COL_PORT & 0b00000010));
            return '5';
        }	
		else if((COL_PORT & 0b00000100)==0)
        {
            while(!(COL_PORT & 0b00000100));
            return '6';
        }
		else if((COL_PORT & 0b00001000)==0)
        {
            while(!(COL_PORT & 0b00001000));
            return '*';
        }
		ROW_PORT = 0b00011011;
		_delay_ms(5);
		if((COL_PORT & 0b00000001)==0)
        {
			while(!(COL_PORT & 0b00000001));
            return '1';
        }
		else if((COL_PORT & 0b00000010)==0)
        {
            while(!(COL_PORT & 0b00000010));
            return '2';
        }	
		else if((COL_PORT & 0b00000100)==0)
        {
            while(!(COL_PORT & 0b00000100));
            return '3';
        }
		else if((COL_PORT & 0b00001000)==0)
        {
            while(!(COL_PORT & 0b00001000));
            return '-';
        }
		ROW_PORT = 0b00010111;
		_delay_ms(5);
		if((COL_PORT & 0b00000001)==0)
        {
			while(!(COL_PORT & 0b00000001));
            return 'C';
        }
		else if((COL_PORT & 0b00000010)==0)
        {
            while(!(COL_PORT & 0b00000010));
            return '0';
        }	
		else if((COL_PORT & 0b00000100)==0)
        {
            while(!(COL_PORT & 0b00000100));
            return '=';
        }
		else if((COL_PORT & 0b00001000)==0)
        {
            while(!(COL_PORT & 0b00001000));
            return 43;	//ASCII value for addition symbol
        }
		ROW_PORT = 0b00001111;
        _delay_ms(5);
        if((COL_PORT & 0b000010000)==0)
        {
            while(!(COL_PORT & 0b00010000));
            return 'D';
        }
    }	
}

unsigned char keypad()
{
    while(1)
    {
        ROW_PORT = 0b00001110;
        _delay_ms(5);
        if((COL_PORT & 0b00000001)==0)
        {
			while(!(COL_PORT & 0b00000001));
            return '7';
        }
		else if((COL_PORT & 0b00000010)==0)
        {
            while(!(COL_PORT & 0b00000010));
            return '8';
        }	
		else if((COL_PORT & 0b00000100)==0)
        {
            while(!(COL_PORT & 0b00000100));
            return '9';
        }
		else if((COL_PORT & 0b00001000)==0)
        {
            while(!(COL_PORT & 0b00001000));
            return '/';
        }
		ROW_PORT = 0b00001101;
		_delay_ms(5);
		if((COL_PORT & 0b00000001)==0)
        {
			while(!(COL_PORT & 0b00000001));
            return '4';
        }
		else if((COL_PORT & 0b00000010)==0)
        {
            while(!(COL_PORT & 0b00000010));
            return '5';
        }	
		else if((COL_PORT & 0b00000100)==0)
        {
            while(!(COL_PORT & 0b00000100));
            return '6';
        }
		else if((COL_PORT & 0b00001000)==0)
        {
            while(!(COL_PORT & 0b00001000));
            return '*';
        }
		ROW_PORT = 0b00001011;
		_delay_ms(5);
		if((COL_PORT & 0b00000001)==0)
        {
			while(!(COL_PORT & 0b00000001));
            return '1';
        }
		else if((COL_PORT & 0b00000010)==0)
        {
            while(!(COL_PORT & 0b00000010));
            return '2';
        }	
		else if((COL_PORT & 0b00000100)==0)
        {
            while(!(COL_PORT & 0b00000100));
            return '3';
        }
		else if((COL_PORT & 0b00001000)==0)
        {
            while(!(COL_PORT & 0b00001000));
            return '-';
        }
		ROW_PORT = 0b0000111;
		_delay_ms(5);
		if((COL_PORT & 0b00000001)==0)
        {
			while(!(COL_PORT & 0b00000001));
            return 'C';
        }
		else if((COL_PORT & 0b00000010)==0)
        {
            while(!(COL_PORT & 0b00000010));
            return '0';
        }	
		else if((COL_PORT & 0b00000100)==0)
        {
            while(!(COL_PORT & 0b00000100));
            return '=';
        }
		else if((COL_PORT & 0b00001000)==0)
        {
            while(!(COL_PORT & 0b00001000));
            return 43;	//ASCII value for addition symbol
        }
    }	
}
