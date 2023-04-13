#include "avg_filter.h"

avg_filter::avg_filter(int pin) {
  _pin = pin;
  pinMode(_pin, INPUT);
}

float avg_filter::filter(int window_size) {
  int emgSamples[window_size];
  int sum = 0;
  for (int i = 0; i < window_size; i++) {
    emgSamples[i] = analogRead(_pin);
    sum += emgSamples[i]; 
    delay(1); 
  }
  float filteredSample = sum / (float) window_size; 
  return filteredSample;
}