#ifndef encoder1_h
#define encoder1_h

#include <Arduino.h>

class encoder
{
	public:
	encoder(int pinA, int pinB);
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
