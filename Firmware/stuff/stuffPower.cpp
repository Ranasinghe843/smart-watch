const uint8_t chrgPin = 27;

stuffPower::stuffPower()
{
  
}
  
void stuffPower::begin()
{
  pinMode(chrgPin, INPUT);
}

bool stuffPower::isCharging()
{
  return !digitalRead(chrgPin); //returns 0 if charging, 1 if not
}

uint16_t stuffPower::getBatteryVoltage()
{
  
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
