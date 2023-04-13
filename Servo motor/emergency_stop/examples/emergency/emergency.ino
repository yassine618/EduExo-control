#include <emergency_stop.h>

EmergencyStop myStop(9); // Initialize an EmergencyStop object on pin 9

void setup() {
  // ...
}

void loop() {
  // ...



  myStop.stop(90); // Call the stop() function to stop the servo motor
                  //  with a stop position of 90 degrees 
}