Arduino UNO Sketch

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

