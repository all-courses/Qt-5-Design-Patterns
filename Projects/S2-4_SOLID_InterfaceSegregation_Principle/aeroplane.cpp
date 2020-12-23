#include "aeroplane.h"

Aeroplane::Aeroplane(QObject *parent) : QObject(parent)
{

}


void Aeroplane::refuel()
{
    qInfo() << "Refueling ...";
}

void Aeroplane::fly()
{
    qInfo() << "Flying ...";
}

void Aeroplane::land()
{
    qInfo() << "Landing ...";
}
