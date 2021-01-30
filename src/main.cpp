#include <Arduino.h>

int sensorPin = D6;

void setup()
{
  pinMode(sensorPin, INPUT);
  Serial.begin(115200);
}

void loop()
{
  int digitalVal = digitalRead(sensorPin);
  Serial.print("\t");
  Serial.println(digitalVal);
  delay(100);
}