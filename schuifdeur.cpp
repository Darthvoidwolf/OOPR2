#include "schuifdeur.h"

#include <QPainter>
SchuifDeur::SchuifDeur(bool a, int b, int c, unsigned int d, Sensor *e):Deur(a,b,c,d) ,sens(e)  {} /*schuifdeurSensorKnop(e)*/



void SchuifDeur::sluit(){

    if(!sens->isGeactiveerd() == true){
        Deur::sluit();
        sens->activeer();

    }
}

void SchuifDeur::open(){
    Deur::open();
    if(Deur::isDeurOpen() == true){
        sens->activeer();
    }

}
// void SchuifDeur::teken(QPaintDevice *tp){
//     QPainter p(tp);
//     QPen pen(Qt::black,2,Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
//     p.setPen(pen);
//     if(isDeurOpen()) // controleert of de deur open is
//         p.drawLine(coordinaten().first, coordinaten().second, coordinaten().first, coordinaten().second+deurLengte());
//     else
//         p.drawLine(coordinaten().first, coordinaten().second, coordinaten().first, coordinaten().second-deurLengte());

// }

