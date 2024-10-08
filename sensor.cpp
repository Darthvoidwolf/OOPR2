#include "sensor.h"
#include <Qpainter>


Sensor::Sensor(int a, int b):x(a), y(b)  {}

Sensor::~Sensor(){}

void Sensor::activeer(){

    geactiveerd = true;

}
void Sensor::deactiveer(){

    geactiveerd =false;

}

bool Sensor::isGeactiveerd(){

    return geactiveerd;

}

void Sensor::teken(QPaintDevice* tp){

    QPainter p(tp);
    QColor kleur;

    p.setBrush(Qt::SolidPattern);
    if(geactiveerd == true){
        kleur= Qt::blue;
    }
    else{
        kleur = Qt::red;

    }

    p.setBrush(kleur);
    QPen pen (kleur, 2,Qt::SolidLine,Qt::RoundCap, Qt::RoundJoin);
    p.setPen(pen);
    p.drawEllipse(x,y,20,20);


}

pair<int,int> Sensor::coordinaten() const {
    pair<int,int> temp;
    temp.first = x;
    temp.second = y;
    return temp;

}
