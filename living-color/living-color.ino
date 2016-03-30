// ATtiny44 pins 6,7,8 can use PWM
int r = 6;
int g = 7;
int b = 8;

void setup() {                
  pinMode(r, OUTPUT);     
  pinMode(g, OUTPUT);     
  pinMode(b, OUTPUT);     
}

void loop() {
  unsigned long t = millis();
//  int red = 128+floor(128*sin(t * PI/ 5000));
  // suppress dominant red
  int red = 64+floor(64*sin(t * PI/ 5000));
  int green = 128+floor(128*sin(t * PI / 6000));
  int blue = 128+floor(128*sin(t * PI/ 7000));
  analogWrite(r, red);
  analogWrite(g, green);
  analogWrite(b, blue);  
}
