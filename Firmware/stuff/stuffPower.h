#ifndef stuffPower_h
#define stuffPower_h

#include <Arduino.h>

class stuff{
  private:

  public:

    stuffPower();
    void begin();
    
    bool isCharging();
    uint16_t getBatteryVoltage();

    void enableGPS();
    void disableGPS();

    void enableMP3();
    void disableMP3();
  };

#endif
