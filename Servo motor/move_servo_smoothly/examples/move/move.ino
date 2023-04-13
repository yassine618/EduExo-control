#include <move_servo.h>

MoveServo myservo(9); // Initialize a MoveServo object on pin 9

void setup() {
  // ...
}

void loop() {
  myservo.moveTo(0, 90, 15); // Call the moveTo() function to move the servo smoothly from 0 degrees to
                            // 90 degrees with a delay of 15ms between each movement increment
  // ...
}
