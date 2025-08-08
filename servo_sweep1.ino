#include <Servo.h>

Servo servo1, servo2, servo3, servo4, servo5, servo6;
Servo servos[] = {servo1, servo2, servo3, servo4, servo5, servo6};

int pins[] = {3, 5, 6, 9, 10, 11};

void setup() {
  for (int i = 0; i < 6; i++) {
    servos[i].attach(pins[i]);
  }

  // Sweep for 2 seconds
  unsigned long startTime = millis();
  while (millis() - startTime < 2000) {
    for (int angle = 0; angle <= 180; angle += 5) {
      for (int i = 0; i < 6; i++) {
        servos[i].write(angle);
      }
      delay(15);
    }
    for (int angle = 180; angle >= 0; angle -= 5) {
      for (int i = 0; i < 6; i++) {
        servos[i].write(angle);
      }
      delay(15);
    }
  }

  // Fix all at 90°
  for (int i = 0; i < 6; i++) {
    servos[i].write(90);
  }
}

void loop() {
  // لا شيء في التكرار
}
