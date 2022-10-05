#include "stuffPower.h"

const uint8_t chrgPin = 27;
const uint8_t battPin = A4;
const uint16_t VDD = 3300;
const uint16_t adcResolution = 1023;

stuffPower::stuffPower()
{
  
}
  
void stuffPower::begin()
{
  pinMode(chrgPin, INPUT);
}

//Returns whether or not the battery is charging
bool stuffPower::isCharging()
{
  return !digitalRead(chrgPin); //returns 0 if charging, 1 if not
}

uint16_t stuffPower::getBatteryVoltage()
{
  uint16_t val = analogRead(battPin); //10-bit ADC, will return a number between 0 and 1023 (3.3V)
  uint16_t voltage = VDD * (val / adcResolution);

  return (2 * voltage);
}

void stuffPower::enableGPS()
{
  
}

void stuffPower::disableGPS()
{
  
}

void stuffPower::enableMP3()
{
  
}

void stuffPower::disableMP3()
{
  
}
