#include <avr/io.h>
#include <avr/interrupt.h>





volatile char Data=0;
void increment_disp()
{	
	Data++;
	if(Data==1)
	{
	PORTB |= (1<<PORTB3);	//b
	PORTB |= (1<<PORTB2);	//a
	PORTB |= (1<<PORTB1);	//e
	PORTD |= (1<<PORTD7);	//d
	PORTD |= (1<<PORTD4);	//f
	PORTD |= (1<<PORTD5);	//c
	PORTD &= ~(1<<PORTD3);	//g
	//Data++;

}

else if (Data==2)
{
	
	PORTB |= (1<<PORTB3);	//b
	PORTD |= (1<<PORTD5);	//c
	PORTB &= ~(1<<PORTB2);	//a
	PORTD &= ~(1<<PORTD3);	//g
	PORTB &=~ (1<<PORTB1);	//e
	PORTD &= ~(1<<PORTD4);	//f
	PORTD &= ~(1<<PORTD7);	//d
	//Data++;
}


else if (Data==3)
{
	
	PORTB |= (1<<PORTB3);	//b
	PORTB |= (1<<PORTB2);	//a
	PORTD |= (1<<PORTD3);	//g
	PORTB |= (1<<PORTB1);	//e
	PORTD |= (1<<PORTD7);	//d
	PORTD &= ~(1<<PORTD4);	//f
	PORTD &= ~(1<<PORTD5);	//c
	//Data++;

}
else if (Data==4)
{
	PORTB |= (1<<PORTB3);	//b
	PORTB |= (1<<PORTB2);	//a
	PORTD |= (1<<PORTD3);	//g
	PORTD |= (1<<PORTD7);	//d
	PORTD |= (1<<PORTD5);	//c
	PORTD &= ~(1<<PORTD4);	//f
	PORTB &= ~(1<<PORTB1);	//e
	//Data++;


}
else if(Data==5)
{
	PORTB |= (1<<PORTB3);	//b
	PORTD |= (1<<PORTD5);	//c
	PORTD |= (1<<PORTD3);	//g
	PORTD |= (1<<PORTD4);	//f
	PORTB &= ~(1<<PORTB2);	//a
	PORTB &= ~(1<<PORTB1);	//e
	PORTD &= ~(1<<PORTD7);	//d
	//Data++;
}
else if(Data==6)
{
	PORTB |= (1<<PORTB2);	//a
	PORTB &= ~(1<<PORTB3);	//b
	PORTD |= (1<<PORTD4);	//f
	PORTD |= (1<<PORTD5);	//c
	PORTD |= (1<<PORTD3);	//g
	PORTB &= ~(1<<PORTB1);	//e
	PORTD |= (1<<PORTD7);	//d
	//Data++;
}
else if(Data==7)
{
	PORTB |= (1<<PORTB2);	//a
	PORTB &= ~(1<<PORTB3);	//b
	PORTD |= (1<<PORTD4);	//f
	PORTD |= (1<<PORTD5);	//c
	PORTD |= (1<<PORTD3);	//g
	PORTB |= (1<<PORTB1);	//e
	PORTD |= (1<<PORTD7);	//d
	//Data++;

}
else if(Data==8)
{

	PORTB |= (1<<PORTB2);	//a
	PORTB |= (1<<PORTB3);	//b
	PORTD |= (1<<PORTD5);	//c
	PORTD &= ~(1<<PORTD3);	//g
	PORTD &= ~(1<<PORTD4);	//
	PORTB &= ~(1<<PORTB1);	//e
	PORTD &= ~(1<<PORTD7);	//d
	//Data++;
}
else if(Data==9)
{
	PORTB |= (1<<PORTB2);	//a
	PORTB |= (1<<PORTB3);	//b
	PORTD |= (1<<PORTD4);	//f
	PORTD |= (1<<PORTD5);	//c
	PORTD |= (1<<PORTD3);	//g
	PORTB |= (1<<PORTB1);	//e
	PORTD |= (1<<PORTD7);	//d
	//Data++;

}
else if(Data==10)
{

	PORTB |= (1<<PORTB2);	//a
	PORTB |= (1<<PORTB3);	//b
	PORTD |= (1<<PORTD4);	//f
	PORTD |= (1<<PORTD5);	//c
	PORTD |= (1<<PORTD3);	//g
	PORTB &=~(1<<PORTB1);	//e
	PORTD |= (1<<PORTD7);	//d
	Data=0;
}
}