#include <Arduino.h>
#include <encoder.h>

encoder::encoder(int pinA, int pinB, int Mode)
{	if(Mode != INPUTPULLUP){
		pinMode(pinA, INPUT);
		pinMode(pinB, INPUT);
	}else{
		pinMode(pinA, INPUT_PULLUP);
		pinMode(pinB, INPUT_PULLUP);
	}
	lastpinA = digitalRead(pinA);
	lastpinB = digitalRead(pinB);
	_pinA = pinA;
	_pinB = pinB;
	
}

long int encoder::baca()
{
	valA = digitalRead(_pinA);
	valB = digitalRead(_pinB);

	if (valA != lastpinA)
   	{
		if (valB != valA)
     		{ 
       			count++;
     		}
		else 
     		{
       			count--;
     		}
	}

	if (valB != lastpinB)
   	{
		if (valA == valB)
     		{ 
       			count++;
     		}
		else 
     		{
       			count--;
     		}
	}
	
	lastpinA = valA;
	lastpinB = valB;
	return count;
}
