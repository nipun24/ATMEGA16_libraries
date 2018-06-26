int count=0,sec=0,min=0,hr=0;		//global variables for time counting in normal mode
void timer_normal()
{
	/*
	1. CS01 = 1 and CS00 = 1 for prescalar of 64
	*/
	TCCR0 = (1<<CS01)|(1<<CS00);	
	TIMSK = (1<<TOIE0);				//timer interrupt mask register - for ISR
	TCNT0 = 6;	
}

ISR(TIMER0_OVF_vect)            //to be used with normal mode
{
	count++;
	if (count==1000)
	{
		sec++;
		count=0;
	}
	if (sec==60)
	{
		min++;
		sec=0;
	}
	if (min==60)
	{
		hr++;
		min=0;
	}
}

void timer_ctc()
{
	/*
	1. WGM01 = 1 for CTC mode
	2. COM00 = 1 for toggle mode in CTC mode
	3. CS01 = 1 for prescalar of 8 
	*/
	TCCR0 = (1<<WGM01)|(1<<COM00)|(1<<CS01);	
}

timer_pwm()
{	
	/*
	1. WG01 = 1 and WGM00 = 1 for fast PWM
	2. COM01 =1 for clear on compare and set on top
	*/
	TCCR0 = (1<<WGM01)|(1<<WGM00)|(1<<COM01)|(1<<CS00);
}