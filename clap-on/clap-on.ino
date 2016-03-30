// clap-on, clap-off LED
// attiny44 version
// based on code by klb

int led = 5;

int aDiff, aDiff2, sensitivity;
bool isOn;

void setup() {
  pinMode(led, OUTPUT);
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
    digitalWrite(led, isOn);
  }
  aDiff2 = aDiff;
}
