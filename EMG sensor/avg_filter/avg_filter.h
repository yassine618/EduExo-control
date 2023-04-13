#ifndef avg_filter_h
#define avg_filter_h

#include "Arduino.h"

class avg_filter {
  public:
    avg_filter(int pin); // Constructor
    float filter(int window_size); // Function to filter the input
  private:
    int _pin; // Analog input pin
};

#endif
