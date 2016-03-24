# attiny44-medley
Atmel attiny44-based medley of fun circuits

# Bill of materials

- attiny44A microcontroller
- 1 170 point breadboard
- 2 AA batteries (1.5V)
- Battery holder for 2 AA batteries
- RGB LED - [example](http://www.kingbright-europe.de/download/LED-Lamp/L-154A4SURKQBDZGC%28Ver.6%29.pdf)
- 3 220 Ohm resistors
- solid copper wire (eg 0.20 mm2 or 22 AWG) - [example](http://www.velleman.co.uk/contents/en-uk/p793.html) 

Optional, for the clap-on switch:

- 1 electret microphone
- 1 LED (any color)
- one extra 220 Ohm resistor

Optional, for the capacitive touch switch:

- 1 1K Ohm resistor
- 1 1M Ohm resistor
- Some fruit ;-)

A wire-stripper with notches for small-gauge wire (20-30 AWG) will be very handy.

# ATtiny44a

See the attiny44 pinout:

![pinout](images/ATtiny44-84-labeled.png "ATtiny44")

# RGB Lamp
Use an RGB LED, some resitors and a ping pong ball to build a color-shifting lamp, similar to a [Philips LivingColors](http://www.livingcolors.philips.com) table lamp.


![rgb](images/rgb-lamp-halfsize.png "rgb lamp")

[fritzing file](rgb-lamp.fzz)

Use a blank ping pong ball as a diffuser.

Your lamp may look like this:

![pic](images/rgb.jpg "picture")

# Apple Breathing status LED indicator
Use an LED and some fruit to control a "breathing" LED.


See also [Sean Voisen's blog post](http://sean.voisen.org/blog/2011/10/breathing-led-with-arduino/).

# Programming

The attiny44a doesn't have a bootloader and a hardware UART we can use for programming, so we need a programmer and upload our firmware using SPI.

You can use an Arduino or a Raspberry Pi for programming, or some dedicated hardware like an [Arduino ISP](https://www.arduino.cc/en/Main/ArduinoISP).

Use the following wiring scheme (refer to the pinout above):

![prog](images/programming_bb_halfsize.png "programming")

