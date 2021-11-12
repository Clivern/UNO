#define LED 13  // The pin the LED is connected to

void setup() {
  pinMode(LED, OUTPUT); // Declare the LED as an output
}

void loop() {
  digitalWrite(LED, HIGH); // sets the digital pin 13 on
  delay(1000);             // waits for a second
  digitalWrite(LED, LOW);  // sets the digital pin 13 off
  delay(1000);             // waits for a second
}
