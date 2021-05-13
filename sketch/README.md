<p align="center">
    <img src="https://raw.githubusercontent.com/Clivern/Uno/main/assets/logo.png?v=0.1.0" width="240" />
    <p align="center">Arduino UNO With Raspberry PI Sketches</p>
</p>
<br/>

#### Sketch 1

```cpp
#define LED 13                 // The pin the LED is connected to

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);        // Declare the LED as an output
}

void loop() {
  digitalWrite(LED, HIGH);     // sets the digital pin LED on
  delay(1000);                 // waits for a second
  digitalWrite(LED, LOW);      // sets the digital pin LED off
  delay(1000);                 // waits for a second
  Serial.write("hello\n");
}
```

On Raspberry PI or Laptop 

```bash
python -m venv venv
pip install pyserial
```

Create a simple python script to read data from serial port.

```python
import serial
import time

ser = serial.Serial('/dev/cu.usbmodem14101', 9800, timeout=1)
time.sleep(2)

for i in range(200):
    line = ser.readline()
    if line:
        string = line.decode()
        print(string)

ser.close()
```

#### Sketch 2

```cpp
#define LED 13

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    if (Serial.readString() == "ON") {
      digitalWrite(LED, HIGH);
      Serial.write("ON");
      delay(1000);
    } else {
      digitalWrite(LED, LOW);
      Serial.write("OFF");
      delay(1000);
    }
  }
}
```

On Raspberry PI or Laptop

```bash
python -m venv venv
pip install pyserial
```

Create a simple python script to read data from serial port.

```python
import serial
import time

ser = serial.Serial('/dev/cu.usbmodem14101', 9800, timeout=1)
time.sleep(2)

# Getting Started
ser.write(b"ON")
for i in range(200):
    line = ser.readline()
    if line:
        incoming = line.decode().strip()
        print("{}\n".format(incoming))
        if incoming == "ON":
            ser.write(b"OFF")
        else:
            ser.write(b"ON")
    time.sleep(1)

ser.close()
```
