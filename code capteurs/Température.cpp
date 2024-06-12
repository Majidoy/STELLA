/*#define ADC_VREF_mV    3300.0 // in millivolt
#define ADC_RESOLUTION 4096.0*/

#include <math.h>

const int PIN_LM35 = 13;
float adcVal = 0, voltage = 0, tempC = 0;

void setup() {
  Serial.begin(9600);
  pinMode(PIN_LM35, INPUT);
}

void loop() {
  // read the ADC value from the temperature sensor
  adcVal = analogRead(PIN_LM35);

  tempC = 5.736466674210 * pow(10, -6) * pow(adcVal, 2) - 0.144656 * adcVal + 600;


  // print the temperature in the Serial Monitor:
  Serial.print("Temperature: ");
  Serial.print(tempC);   // print the temperature in °C
  Serial.println("°C");

  delay(500);
}