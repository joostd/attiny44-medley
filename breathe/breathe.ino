#include <math.h>

#define LED 5

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  float val = (exp(sin(millis()/2000.0*PI)) - 0.36787944)*108.0;
  analogWrite(LED, val);
}
