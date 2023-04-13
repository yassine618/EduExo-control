#include <avg_filter.h> //include the avg_filter library

avg_filter myFilter(A1); //create an object of the class avg_filter with the argument A1, which is the pin number where the analog signal is read from.

void setup() {
  Serial.begin(9600);
}

void loop() {
  float filteredSample = myFilter.filter(10); //read 10 analog samples from pin A1, average them, and assign the resulting average value to the variable filteredSample.
  Serial.println(filteredSample); //print the result
  delay(10);
}




