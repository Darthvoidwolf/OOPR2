#ifndef DEUR_H
#define DEUR_H

#include <utility>

using namespace std;
class QPaintDevice;
class Deur
{
public:
    Deur(bool, int, int, unsigned int);
    virtual ~Deur();
    virtual void open();
    virtual void sluit();
    virtual void teken(QPaintDevice*);
    virtual bool isDeurOpen();
    virtual unsigned int deurLengte();
   // virtual pair<int,int> cordinaten() const;





private:
    bool status;
    int x_coordinaat;
    int y_coordinaat;
    unsigned int lengte;

};

#endif // DEUR_H
