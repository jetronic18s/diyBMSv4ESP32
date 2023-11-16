#ifndef Steinhart_H // include guard
#define Steinhart_H

#include <Arduino.h>

class Steinhart {
   public:
      static int16_t ThermistorToCelcius(uint16_t BCOEFFICIENT, uint16_t RawADC, float ADCScaleMax);

};
#endif
