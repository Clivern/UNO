// Copyright 2021 Clivern. All rights reserved.
// Use of this source code is governed by the MIT
// license that can be found in the LICENSE file.

// Hardware Used
// - PC with Arduino IDE
// - UNO R3 with Cable 1 PCS
// - Red Led 5 PCS

// Simulator
// - https://wokwi.com/arduino/projects/315148650082730560

#define LED 13                 // The pin the LED is connected to

void setup() {
  pinMode(LED, OUTPUT);        // Declare the LED as an output
}

void loop() {
  digitalWrite(LED, HIGH);     // sets the digital pin LED on
  delay(1000);                 // waits for a second
  digitalWrite(LED, LOW);      // sets the digital pin LED off
  delay(1000);                 // waits for a second
}
