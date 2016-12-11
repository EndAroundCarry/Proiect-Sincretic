#include <util/delay.h>
#define FOSC 16000000
#define BAUD 9600
#define MYUBRR FOSC/16/BAUD -1
#include <stdint.h>
#include <avr/io.h>
#include <avr/interrupt.h>

volatile char ReceivedChar;

void Comunicare_Seriala()
{

	ReceivedChar = UDR0;                     // salvez datele de la receptie 
	
	if(ReceivedChar=='A')
	{
		PORTB |= (1<<PORTB0);
	}
	else if(ReceivedChar=='S')
	{
		PORTB &= ~(1<<PORTB0);
	}
	
}