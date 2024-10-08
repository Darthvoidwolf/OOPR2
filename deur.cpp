#include "deur.h"

#include <QPainter>

Deur::Deur(bool a, int b, int c, unsigned int d): status(a), x_coordinaat(b), y_coordinaat(c), lengte(d) {}


Deur::~Deur(){}

void Deur::open(){
    status =true;

}

void Deur::sluit(){

    status =false;
}

bool Deur::isDeurOpen(){

    return status;
}

unsigned int Deur::deurLengte(){
    return lengte;

}


void Deur::teken(QPaintDevice *tp)
{
    QPainter p(tp);
    //p.setBrush(Qt::SolidPattern);

    // p.setBrush(Qt::black);
    QPen pen(Qt::black,2,Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
    p.setPen(pen);
    if(status) // controleert of de deur open is
        p.drawLine(x_coordinaat, y_coordinaat, x_coordinaat, y_coordinaat-lengte);
    else
        p.drawLine(x_coordinaat, y_coordinaat, x_coordinaat, y_coordinaat+lengte);
}
