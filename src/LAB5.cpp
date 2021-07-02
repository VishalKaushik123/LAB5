/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/Vishal/Documents/CTDProjects/LAB5/src/LAB5.ino"
/*
 * Project LAB5
 * Description:
 * Author:
 * Date:
 */
void setup();
void loop();
#line 7 "c:/Users/Vishal/Documents/CTDProjects/LAB5/src/LAB5.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
uint16_t value; 
uint16_t maxValue;
uint16_t minValue;
// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(D8, OUTPUT);
  pinMode(A5, INPUT);   
  maxValue = max(maxValue,value);
  minValue = min(minValue, value);
  
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  value = analogRead(A5);
  analogWrite(D8,map(value, minValue, maxValue, 0, 255));
}