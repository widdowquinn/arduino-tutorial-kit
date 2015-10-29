// Blink
// Uses LED L on the Arduino UNO

int ledPin = 13; // LED L is connected with digital pin 13

// The setup() routine configures the digital port
// setup() is executed once, when the program starts
void setup() {
  // configure pin as output
  pinMode(ledPin, OUTPUT);
}

// The main program is an infinite loop
void loop() {
  digitalWrite(ledPin, HIGH); // Turn on LED
  delay(1000); // Wait 1000ms
  digitalWrite(ledPin, LOW); // Turn off LED
  delay(1000); // Wait 1000ms
}
