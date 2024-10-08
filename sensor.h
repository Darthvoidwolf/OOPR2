#ifndef SENSOR_H
#define SENSOR_H
#include <utility>

#include "QPaintDevice"

using namespace std;
class Sensor
{
public:
    Sensor(int, int);
    virtual ~Sensor();
    virtual void teken(QPaintDevice* );
    virtual void activeer();
    virtual void deactiveer();
    virtual bool isGeactiveerd();
    virtual std::pair<int,int> coordinaten() const;




private:
    int x;
    int y;
    bool geactiveerd;

};

#endif // SENSOR_H
