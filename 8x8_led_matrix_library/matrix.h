//library for 8x8 led matrix to display all letters
unsigned char row[8] = {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
void A()
{
	unsigned char clm[8] = {0xbd,0xbd,0xbd,0x81,0xbd,0xbd,0xdb,0xe7};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void B()
{
	unsigned char clm[8] = {0x87,0xbb,0xbb,0xbb,0x87,0xbb,0xbb,0x87};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void C()
{
	unsigned char clm[8] = {0xe1,0xdf,0xbf,0xbf,0xbf,0xbf,0xdf,0xe1};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void D()
{
	unsigned char clm[8] = {0x87,0xbb,0xbd,0xbd,0xbd,0xbd,0xbb,0x87};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void E()
{
	unsigned char clm[8] = {0x81,0xbf,0xbf,0xbf,0x87,0xbf,0xbf,0x81};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void F()
{
	unsigned char clm[8] = {0xbf,0xbf,0xbf,0xbf,0x87,0xbf,0xbf,0x81};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void G()
{
	unsigned char clm[8] = {0xe1,0xdd,0xbd,0xa1,0xbf,0xbf,0xdf,0xe1};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void H()
{
	unsigned char clm[8] = {0xbd,0xbd,0xbd,0xbd,0x81,0xbd,0xbd,0xbd};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void I()
{
	unsigned char clm[8] = {0x81,0xe7,0xe7,0xe7,0xe7,0xe7,0xe7,0x81};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void J()
{
	unsigned char clm[8] = {0xf7,0xeb,0xdb,0xfb,0xfb,0xfb,0xfb,0xc1};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void K()
{
	unsigned char clm[8] = {0xdd,0xdb,0xd7,0xcf,0xcf,0xd7,0xdb,0xdd};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void L()
{
	unsigned char clm[8] = {0xc3,0xdf,0xdf,0xdf,0xdf,0xdf,0xdf,0xdf};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void M()
{
	unsigned char clm[8] = {0xbd,0xbd,0xbd,0xbd,0xbd,0xa5,0x99,0xbd};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void N()
{
	unsigned char clm[8] = {0x7e,0x7c,0x7a,0x76,0x6e,0x5e,0x3e,0x7e};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void O()
{
	unsigned char clm[8] = {0xe7,0xdb,0xbd,0xbd,0xbd,0xbd,0xdb,0xe7};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void P()
{
	unsigned char clm[8] = {0xbf,0xbf,0xbf,0x87,0xbb,0xbb,0xbb,0x87};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void Q()
{
	unsigned char clm[8] = {0xe4,0xdb,0xb5,0xbd,0xbd,0xbd,0xdb,0xe7};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void R()
{
	unsigned char clm[8] = {0xbb,0xb7,0xaf,0x87,0xbb,0xbb,0xbb,0x87};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void S()
{
	unsigned char clm[8] = {0x87,0xfb,0xfb,0xfb,0xc7,0xbf,0xbf,0xc7};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void T()
{
	unsigned char clm[8] = {0xe7,0xe7,0xe7,0xe7,0xe7,0xe7,0xe7,0x81};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void U()
{
	unsigned char clm[8] = {0xe7,0xdb,0xbd,0xbd,0xbd,0xbd,0xbd,0xbd};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void V()
{
	unsigned char clm[8] = {0xbf,0x9f,0xaf,0xb7,0xbb,0xbd,0xbd,0xbd};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void W()
{
	unsigned char clm[8] = {0xbd,0x99,0xa5,0xbd,0xbd,0xbd,0xbd,0xbd};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void X()
{
	unsigned char clm[8] = {0x7e,0xbd,0xdb,0xe7,0xe7,0xdb,0xbd,0x7e};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void Y()
{
	unsigned char clm[8] = {0xe7,0xe7,0xe7,0xe7,0xe7,0xdb,0xbd,0x7e};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
void Z()
{
	unsigned char clm[8] = {0x00,0xbf,0xdf,0xef,0xf7,0xfb,0xfd,0x00};
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<8;j++)
		{
			PORTA = row[j];
			PORTB = clm[j];
			_delay_ms(1);
		}
	}
	PORTA = 0b00000000;
	PORTB = 0b11111111;
	_delay_ms(200);
}
