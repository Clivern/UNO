// Copyright 2021 Clivern. All rights reserved.
// Use of this source code is governed by the MIT
// license that can be found in the LICENSE file.

// Hardware Used
// - PC with Arduino IDE
// - UNO R3 with Cable 1 PCS
// - Red Led 5 PCS
// - 830 Tie-Points BreadBoard 1 PCS
// - 65 Jumper Wire 1 PCS (~3 Used)
// - Resistor 100 PCS (1 Used)
// - Photoresistor 2 PCS (1 Used)

int val = 0;
int LED = 13;

void setup() {
  // Enable Debugging
  Serial.begin(9600);

  // Declare the LED as an output
  pinMode(LED, OUTPUT);
}

void loop() {
  val = analogRead(A0);

  if (val <= 0) {
    // Room is quite dark so switch on the LED
    digitalWrite(LED, HIGH);
  } else {
    // the is some light so switch off the LED
    digitalWrite(LED, LOW);
  }

  // Debug Analog Values
  Serial.println("Analog Value :");
  Serial.println(val);
  delay(250);
}
