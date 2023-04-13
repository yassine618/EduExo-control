#ifndef MOVE_SERVO_SMOOTHLY_H
#define MOVE_SERVO_SMOOTHLY_H

#include <Servo.h>
#include <Arduino.h>
class MoveServo {
public:
  MoveServo(int pin);
  void moveTo(float actual_pos, float desired_pos, int delay_time);

private:
  Servo _servo;
};

#endif 
