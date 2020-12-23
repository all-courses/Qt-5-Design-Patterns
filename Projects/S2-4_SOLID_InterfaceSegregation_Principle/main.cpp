#include <QCoreApplication>
#include <QDebug>
#include "interfaces/iFlying.h"
#include "aeroplane.h"
#include "bird.h"


void trip(iFlying *obj){
    obj->fly();
    obj->land();
}

void checkFuel(iMachine *obj){
    obj->refuel();
}

void testBird(){
    Bird bird;
    trip(&bird);
}

void testAeroPlane(){
    Aeroplane aeroplane;
    trip(&aeroplane);
    checkFuel(&aeroplane);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    testBird();
    testAeroPlane();

    return a.exec();
}
