#ifndef encoder_h
#define encoder_h

#include <Arduino.h>
#define INPUTPULLUP 1
#define INPUT 0
class encoder
{
	public:
	encoder(int pinA, int pinB, int Mode);
	long int baca();

	private:
	int lastpinA;
	int lastpinB;
	int valA;
	int valB;
	int _pinA;
	int _pinB;
	long int count;
};

#endif
