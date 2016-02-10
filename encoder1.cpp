#include <Arduino.h>
#include <encoder1.h>

encoder::encoder(int pinA, int pinB)
{
	pinMode(pinA, INPUT);
	pinMode(pinB, INPUT);

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
