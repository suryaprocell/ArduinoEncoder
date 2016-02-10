#include <encoder1.h>

encoder myencoder(3,4);
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
