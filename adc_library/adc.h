void ADC_setup()
{
	ADMUX = (1<<REFS0);     //REFS0 = 1,  AVCC with external capacitor at AREF pin
    /*
    1. ADEN = 1 to enable the ADC
    2. ADPS2,ADPS1 & ADPS2 are all set to '1' to select prescalar of '128'   
    */
	ADCSRA = (1<<ADPS0)|(1<<ADPS1)|(1<<ADPS2)|(1<<ADEN);
}

unsigned int ADC_value(unsigned char channel)
{
	ADMUX = 0x40|channel;               //channel is stored in ADMUX;
	ADCSRA|=(1<<ADSC);                  //ADSC = 1, starting the conversion
	while (!(ADCSRA & (1<<ADIF)));      //waiting till the conversion in complete. ADIF flag is set once conversion is done
	ADCSRA|=(1<<ADIF);                  //clearing the ADIF (interrupt flag) for next conversion
	return ADC;
}
