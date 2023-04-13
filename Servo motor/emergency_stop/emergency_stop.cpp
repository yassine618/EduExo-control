#include "emergency_stop.h"

EmergencyStop::EmergencyStop(int pin) {
  _servo.attach(pin);
}

void EmergencyStop::stop(int stop_position) {
  _servo.write(stop_position);
  Serial.println("Emergency stop triggered");
  while (true) {
    delay(3000);
  }
}
