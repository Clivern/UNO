// Copyright 2021 Clivern. All rights reserved.
// Use of this source code is governed by the MIT
// license that can be found in the LICENSE file.

// Hardware Used
// - PC with Arduino IDE
// - UNO R3 with Cable 1 PCS
// - 2 Jumper Wire 1 PCS
// - Active Buzzer 1 PCS

int buzzer = 12;            // the pin of the active buzzer

void setup() {
  pinMode(buzzer, OUTPUT);   // initialize the buzzer pin as an output
}

void loop() {
  unsigned char i;

  while (1) {
    // output a frequency
    for (i = 0; i < 80; i++) {
      digitalWrite(buzzer, HIGH);
      delay(1);//wait for 1ms
      digitalWrite(buzzer, LOW);
      delay(1);//wait for 1ms
    }

    // output another frequency
    for (i = 0; i < 100; i++) {
      digitalWrite(buzzer, HIGH);
      delay(2);//wait for 2ms
      digitalWrite(buzzer, LOW);
      delay(2);//wait for 2ms
    }
  }
}
