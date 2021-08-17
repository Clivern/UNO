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

const int LED = 9;
const int BUTTON = 7;

int val = 0;          // Button current value
int old_val = 0;      // Button old value
int state = 0;        // Button state (1 or 0)

int brightness = 128;
long startTime = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  val = digitalRead(BUTTON);

  if ((val == HIGH) && (old_val == LOW)) {
    // Switch the state
    state = 1 - state;
    startTime = millis();
    delay(10);
  }

  if ((val == HIGH) && (old_val == LOW)) {
    // if the button is held for more that 500 ms
    if ((state == 1) && (millis() - startTime > 500)) {
      brightness++;
      delay(10);

      // 255 is the max brightness
      if (brightness > 255) {
        brightness = 0;
      }
    }
  }

  old_val = val;

  if (state == 1) {
    analogWrite(LED, brightness);
  } else {
    analogWrite(LED, 0);
  }
}
