#include "move_servo_smoothly.h"

MoveServo::MoveServo(int pin) {
  _servo.attach(pin);
}

void MoveServo::moveTo(float actual_pos, float desired_pos, int delay_time) {
  if (desired_pos > actual_pos) {
    for (float pos = actual_pos; pos <= desired_pos; pos += 1) {
      _servo.write(pos);
      delay(delay_time);
    }
  } else {
    for (float pos = actual_pos; pos >= desired_pos; pos -= 1) {
      _servo.write(pos);
      delay(delay_time);
    }
  }
}
