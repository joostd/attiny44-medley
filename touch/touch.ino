#include <CapacitiveSensor.h>

#define LED 5

// attiny44 version
/*
 * pin 10 is the sensor (receive) pin - connect 1k Ohm resistor
 * pin 9 is the send pin - connect 1M Ohm resistor
 * pin 5 is the LED pin - connect 220 Ohm resistor
 */

CapacitiveSensor cs = CapacitiveSensor(9,10);

void setup()                    
{
   pinMode(LED,OUTPUT);
}

void loop()                    
{
    long start = millis();
    long total =  cs.capacitiveSensor(10);

    if( total > 100 ) {
      float val = (exp(sin(millis()/2000.0*PI)) - 0.36787944)*108.0; // "breathe"
      analogWrite(LED, val);
    } else {
      analogWrite(LED, 0);
    }
}
