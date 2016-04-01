// clap-on, clap-off LED
// attiny44 version
// based on code by klb

// electret microphone on GND and Pin0
// RGB LED on pins 6,7,8 (can use PWM)
int r = 6;
int g = 7;
int b = 8;

int aDiff, aDiff2, sensitivity;
bool isOn;

void setup() {
  pinMode(r, OUTPUT);     
  pinMode(g, OUTPUT);     
  pinMode(b, OUTPUT);     
  pinMode(A0, INPUT);
  digitalWrite(A0, HIGH); // pull down
  sensitivity = 3;
  isOn = false;
}

void loop() {
  int n = 500;
  int aRead, aMax = 0, aMin = 1023;
  for( int i=0; i<n; i++) {
    aRead = analogRead(A0);
    if( aRead < aMin) {
      aMin = aRead;
    }
    if( aRead > aMax ) {
      aMax = aRead;
    }
  }

  aDiff = aMax - aMin;
  if( aDiff > aDiff2 * sensitivity ) {
    isOn = !isOn;
  }
  aDiff2 = aDiff;
  int red, green, blue = 0;
  if( isOn ) {
    float t = (float) millis();
    // suppress dominant red
    red = 64+floor(64*sin(t * PI / 50000));
    green = 128+floor(128*sin(t * PI / 60000));
    blue = 128+floor(128*sin(t * PI / 70000));
  } else {
    red = green = blue = 0;
  }
  analogWrite(r, red);
  analogWrite(g, green);
  analogWrite(b, blue);  
}
