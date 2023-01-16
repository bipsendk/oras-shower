#include "esphome.h"
using namespace esphome;

class DSH {
  public:

    unsigned long tStartTime;
    unsigned long tLastUpdate;

    char szLastShowerEnded[32]; // Human readable of tLastUpdate

    unsigned long lCurrentShowerNo;  // 
    unsigned long lLastShowerNo;  // No of previous shower - used to find out if previous shower is being continued

    float curWaterLiters;
    float curEnergy;
    float curBathTemp;
    uint16_t  curShowerFlowDuration;

    float lastWaterLiters=0;
    float lastEnergy=0;
    float lastBathTemp=0;
    uint16_t  lastShowerFlowDuration;

    unsigned long lastShowerDuration=0;

    boolean occupancy=0;

    uint8_t bleData[20];

} dsh;
