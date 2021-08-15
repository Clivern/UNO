// Copyright 2021 Clivern. All rights reserved.
// Use of this source code is governed by the MIT
// license that can be found in the LICENSE file.

// Hardware Used (To build two circuits)
// - PC with Arduino IDE
// - UNO R3 with Cable 1 PCS
// - 2 Leds 5 PCS (Blue, Red)
// - 830 Tie-Points BreadBoard 1 PCS
// - 65 Jumper Wire 1 PCS (~6 Used)
// - Resistor 100 PCS (2 Used)

#define RED 13                  // The pin the RED is connected to
#define YELLOW 12               // The pin the YELLOW is connected to

void setup() {
  pinMode(RED, OUTPUT);         // Declare the RED as an output
  pinMode(YELLOW, OUTPUT);      // Declare the YELLOW as an output
}

void loop() {
  digitalWrite(RED, HIGH);      // sets the digital pin RED on
  digitalWrite(YELLOW, LOW);    // sets the digital pin RED off
  delay(1000);                  // waits for a second
  digitalWrite(RED, LOW);       // sets the digital pin RED off
  digitalWrite(YELLOW, HIGH);   // sets the digital pin YELLOW on
  delay(1000);                  // waits for a second
}
