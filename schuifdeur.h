#ifndef SCHUIFDEUR_H
#define SCHUIFDEUR_H
#include <memory>

#include "deur.h"

#include "sensor.h"

class QPaintDevice;

class Deur;

class SchuifDeur : public Deur
{
public:
    SchuifDeur(bool,int,int,unsigned int, Sensor* );
    virtual void sluit();
  //  virtual void teken(QPaintDevice*);
    virtual void open();



private:
    Sensor *sens;
   // HallSensor schuifdeurSensorKnop;

};

#endif // SCHUIFDEUR_H
