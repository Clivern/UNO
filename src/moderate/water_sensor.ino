// Copyright 2021 Clivern. All rights reserved.
// Use of this source code is governed by the MIT
// license that can be found in the LICENSE file.

// Hardware Used
// - PC with Arduino IDE
// - UNO R3 with Cable 1 PCS
// - Water Level Detection Sensor Module 1 PCS

#define sensorPower 7
#define sensorPin A0

// Value for storing water level
int val = 0;

void setup() {
  // Set D7 as an OUTPUT
  pinMode(sensorPower, OUTPUT);

  // Set to LOW so no power flows through the sensor
  digitalWrite(sensorPower, LOW);

  Serial.begin(9600);
}

void loop() {
  // Get the reading from the function below and print it
  int level = readSensor();

  Serial.print("Water level: ");
  Serial.println(level);

  delay(1000);
}

// This is a function used to get the reading
int readSensor() {
  digitalWrite(sensorPower, HIGH);    // Turn the sensor ON
  delay(10);                          // Wait 10 milliseconds

  val = analogRead(sensorPin);        // Read the analog value form sensor
  digitalWrite(sensorPower, LOW);     // Turn the sensor OFF

  return val;                         // Send current reading
}
