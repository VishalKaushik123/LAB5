/*
 * Project LAB5
 * Description:
 * Author:
 * Date:
 */
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
uint16_t value; 
uint16_t maxValue = 0;
uint16_t minValue = 4095;
// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(D8, OUTPUT); //sets D8 as output
  pinMode(A5, INPUT);  //sets A5 as input
  
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  value = analogRead(A5); //initalizes value with the input from A5(the photo resistor)

  maxValue = max(maxValue,value); //sets maxValue to the highest value inputed, bright room
  minValue = min(minValue, value); //sets minValue to the highest value inputed, dark room

  analogWrite(D8,map(value, minValue, maxValue, 0, 255)); //converts the 0-4095 number to range between 0-255, and turns led on
  
}
