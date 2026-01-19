// ==========================
//  Arduino Sketch
// ==========================

// Variable for LED pin (digital output & PWM)
int ledPin = 9;

void setup() {
  // Initialize digital pin as output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // --------------------------
  // Analog Output: Fade LED
  // --------------------------
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(ledPin, brightness); // Increase brightness
    delay(10);
  }
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(ledPin, brightness); // Decrease brightness
    delay(10);
  }

  // --------------------------
  // Digital Output: Blink LED fully on/off
  // --------------------------
  digitalWrite(ledPin, HIGH); // Turn LED fully on
  delay(500);
  digitalWrite(ledPin, LOW);  // Turn LED off
  delay(500);
}
