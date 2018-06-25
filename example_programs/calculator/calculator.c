/*
include all header files from the header files folder
	1. lcd_library
	2. keypad_library
*/
#include<avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>
#define lcd PORTA
#include <mylibrary/lcd.h>
#define ROW_PORT PORTD	
#define COL_PORT PINC
#include <mylibrary/keypad.h>

//global variables
int num1=0,num2=0;
unsigned char x,op,set1=0,set2=0,del=0,c=0x80;

//delete funtion
void delete_fn()
{
	lcd_address(0x04);
	c--;
	lcd_address(c);
	lcd_data(' ');
	lcd_address(0x06);
	lcd_address(c);			
}

void main()
{
	DDRA = 0b11111111;
	DDRC = 0b11100000;
	PORTC = 0b00011111;
	DDRD = 0b11111111;
	lcd_setup();
    lcd_address(0x80);
	while(1)
	{
		lcd_address(0x01);
		//input first number
		start:
		while(set1==0)
		{
			x=keypad_calc();
			if (x=='C') //if user presses clear
			{
				op=x;
				break;
			}
			else if(x=='D')	//if user presses delete
			{
				num1=num1/10;
				delete_fn();				
			}
			else if(x=='+' | x=='-' | x=='*' | x=='/')
			{
				lcd_data(x);
				op=x;
				set1++;
				c++;
				break;
			}
			else
			{
				num1 = (num1*10)+(x-48);
				lcd_data(x);
				c++;
			}
		}
		//input second number
		while(set2==0)
		{	
			x=keypad_calc();
			//if user presses delete button after the operator/sign
			if(x=='D' && num2==0)
			{
				delete_fn();
				set1=0;
				goto start;
			}			
			//to check if the user presses the clear button just after the operator/sign
			else if (op=='C' | x=='C')   //if user presses clear or it is pressed before
			{
				op=x;
				break;
			}
			//checking for the other numbers and delete button if the clear button is not pressed before
			//else 
			else if(x=='=')
			{
				lcd_address(0xcf);
				break;
			}
			else if(x=='D')
			{
				num2=num2/10;
				delete_fn();
			}
			else
			{
				num2 = (num2*10)+(x-48);
				lcd_data(x);
				c++;
			}
		}

		//condition checking
		condition:
		switch(op)
		{
			case '+' : 
				lcd_number_infinite(num1+num2);
				break;
            case '-' :
				if(num2>num1)
				{
					lcd_number_infinite(num2-num1);
					lcd_address(0x04);
					lcd_data('-');  //adding -ve sign before the result
					lcd_address(0x06);
				}
				else
					lcd_number_infinite(num1-num2);
                break;
            case '*' :
                lcd_number_infinite(num1*num2);
                break;
            case '/' :
                if(num2==0) //trying to divide by 0
                {
                    lcd_address(0x04);
                    lcd_string("!!rorre"); //"error!!!" in reverse order
                    lcd_address(0x06);
                }
                else
                    lcd_number_infinite(num1/num2);
                break;
			case 'C':
				num1=num2=set1=set2=0;
				c=0x80;
				lcd_address(0x01);
				lcd_address(0x80);
				goto start;
				break;
            default :
                break;			
		}
		x=keypad_calc();
		if (x=='C')
		{
			num1=num2=set1=set2=0;  	//reseting everything
			lcd_address(0x01);      	//clearing the LCD
			lcd_address(0x80);      	//reseting the address
			c=0x80;						//address couter variable set to starting of LCD
			goto start;
		}					
	}	
}
