#include "esphome.h"
using namespace esphome;

class DSH {
  public:

    unsigned long tStartTime;
    unsigned long tLastUpdate;

    float totWaterLiters;
    float totEnergy;
    float bathTemp;
    unsigned long lastTemperature;
    boolean occupancy=0;

    uint8_t bleData[20];

} dsh;