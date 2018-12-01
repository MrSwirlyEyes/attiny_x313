// Trivial program to test the ATtinyX313.
//
// Toggles LED on and off for a fixed period of time.
//  Typical blink sketch.


#define led 8

void setup() {
  // Initialize ATtinyX313 digital physical pin 11
  //	(programming pin 8) as an output.
  pinMode(led, OUTPUT);
}

void loop() {
  // Toggle LED on
  digitalWrite(led, HIGH);
  delay(1000);

  // Toggle LED off
  digitalWrite(led, LOW);
  delay(1000);
}
