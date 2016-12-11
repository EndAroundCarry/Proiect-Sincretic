#define FOSC 16000000                      
#define BAUD 9600
#define MYUBRR FOSC/16/BAUD -1
#include <stdint.h>
#include <avr/io.h>
#include <avr/interrupt.h>

void setup()
{

	// setup pentru LED blink

	// initializez Timer1
	 
	cli();						//dezactivez intreruperile globale
	TCCR1A = 0;     
	TCCR1B = 0;     
 
	
	 OCR1A = 15624;				//valoarea de comparat pentru intrerupere la o secunda
	 
	 TCCR1B |= (1 << WGM12);	// activez modul de operate CTC a timer-ului
	 
	 TCCR1B |= (1 << CS10);		//setez bitii CS10 si CS12 pe prescaler de 1024
	 TCCR1B |= (1 << CS12);
	
	 TIMSK1 |= (1 << OCIE1A);	// activez intreruperea timerului la valoarea de comparat
	
	 DDRB |= (1<<DDB4);			//setez pinul ca iesire
	 DDRB |= (1<<DDB0);			
	 	
		// setup pentru Fade LED				

	 DDRD |= (1 << DDD6);		//setez pinul 6 ca ouptut
		
		
	 //OCR0A = 255;				// valoare maxima ajustabila
	 
	 TIMSK0 |= (1 << OCIE0A); 
		
	 TCCR0A |= (1 << COM0A1);   // setez modul neinversor
	  

	 TCCR0A |= (1<<WGM02)|(1 << WGM01) | (1 << WGM00);	 // setez modul de operare FAST PWM cu Update la BOTTOM si Intrerupere la OCR0A
	  

	 TCCR0B |= (1 << CS02);		 // setez prescaler-ul la valoarea 8 si pornesc PWM	
	
	//setup pentru comunicatie 	

	UBRR0H = (MYUBRR >> 8);						//Setez Baud rate
	UBRR0L = MYUBRR;
	UCSR0C &= ~(1<<UMSEL00)|(1<<UMSEL01);		//setez modul asincron
	UCSR0B |= (1 << RXEN0) | (1 << TXEN0);		//pornesc receptia si transmisia
	UCSR0B |= (1 << RXCIE0);                    //pornesc intreruperile la receptie
	UCSR0C |= (1 << UCSZ01) | (1 << UCSZ00);    // Setez dimensiunea caracterului pe 8 biti 
	 sei();										//pornesc intreruperile globale
}