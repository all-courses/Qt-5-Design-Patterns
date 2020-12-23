#include "basicoven.h"

BasicOven::BasicOven(QObject *parent) : QObject(parent)
{

}


void BasicOven::bake()
{
    qInfo() << this << "Do Some Basic Stuff ...";
    qInfo() << this << "start baking ...";
}
