#ifndef HALLSENSOR_H
#define HALLSENSOR_H

#include "sensor.h"

class Sensor;

class HallSensor : public Sensor
{
public:
    HallSensor(int a, int b);

    void teken(QPaintDevice* );

};

#endif // HALLSENSOR_H
