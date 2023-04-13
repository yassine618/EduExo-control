#ifndef EMERGENCY_H
#define EMERGENCY_H
#include <Arduino.h>
#include <Servo.h>

class EmergencyStop {
public:
  EmergencyStop(int pin);
  void stop(int stop_position);

private:
  Servo _servo;
};

#endif // EMERGENCY_STOP_H