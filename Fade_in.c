#include <avr/io.h>
#include "Fade_in.h"

int flag=0;

void Fade_in()
{
	if(flag==0)
  {	
	if(OCR0A<255)
	  {
		OCR0A++;
	  }
	else if(OCR0A==255)
	  {
			flag=1;
	  }
   }
	else Fade_out();
	
}

void Fade_out()
{
	if (flag==1)
	{
		if(OCR0A>0)
	  {	
		 OCR0A--;
	  }
		else flag=0;
	}
	else Fade_in();
}





