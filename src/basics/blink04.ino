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

int val = 0;
int old_val = 0;
int state = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  val = digitalRead(BUTTON);

  if ((val == HIGH) && (old_val == LOW)) {
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
