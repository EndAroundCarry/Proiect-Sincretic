#include <avr/io.h>
#include "ledBlink.h"

int a=0;

void ledBlinK()
{

	if(a==0)
	{
		PORTB |= (1<<PORTB4);   // led-ul este on
		a++;
	}
	else if(a==1)
	{
		PORTB &= ~(1<<PORTB4);    //led-ul trece pe off
		a=0;
	}
}