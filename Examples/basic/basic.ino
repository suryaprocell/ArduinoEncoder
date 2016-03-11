#include <encoder.h>

encoder myencoder(3,4,INPUTPULLUP);
long int count;

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  count = myencoder.baca();
  Serial.println(count);
}
