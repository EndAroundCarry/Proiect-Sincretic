#include <avr/io.h>
#include <avr/interrupt.h>
#include "ledBlink.h"
#include "setup.h"
#include "Fade_in.h"
#include "Comunicare_Seriala.h"
#define FOSC 16000000                       
#define BAUD 9600
#define MYUBRR FOSC/16/BAUD -1



int main(void)
{
	 setup();

	while(1)
	{
		
	}

}

ISR (USART_RX_vect)
{
	Comunicare_Seriala();         
}



ISR(TIMER1_COMPA_vect)
{
	ledBlinK();
}

ISR(TIMER0_COMPA_vect)
{

	
}