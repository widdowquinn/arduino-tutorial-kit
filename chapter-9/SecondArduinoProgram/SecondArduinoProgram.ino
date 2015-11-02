// A second Arduino program, from the Arduino Tutorial Kit Manual

int ledPin = 13; // LED is connected to pin 13

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  Serial.println("Our second Arduino program!");
  Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("5 + 188 yields ");
  Serial.print(5 + 188);
  while(true)
  {
      digitalWrite(ledPin, HIGH);
      delay(1000);
      digitalWrite(ledPin, LOW);
      delay(1000);
      continue;
  }
}
