#include "bird.h"

Bird::Bird(QObject *parent) : QObject(parent)
{

}


void Bird::fly()
{
    qInfo() << "Flying ...";
}

void Bird::land()
{
    qInfo() << "Landing ...";
}
