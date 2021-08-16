// Copyright 2021 Clivern. All rights reserved.
// Use of this source code is governed by the MIT
// license that can be found in the LICENSE file.

// Hardware Used
// - PC with Arduino IDE
// - UNO R3 with Cable 1 PCS
// - Red Led 5 PCS
// - 830 Tie-Points BreadBoard 1 PCS
// - 65 Jumper Wire 1 PCS (~7 Used)
// - Resistor 100 PCS (2 Used)
// - Small Button 5 PCS

const int LED = 13;
const int BUTTON = 7;

int val = 0;          // Button current value
int old_val = 0;      // Button old value
int state = 0;        // Button state (1 or 0)

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  val = digitalRead(BUTTON);

  // Check if button is clicked
  if ((val == HIGH) && (old_val == LOW)) {
    // Switch the state
    state = 1 - state;
    delay(10);
  }

  old_val = val;

  if (state == 1){
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
