#include "badoven.h"

BadOven::BadOven(QObject *parent) : BasicOven(parent)
{

}


void BadOven::bake()
{

    qInfo() << this << "start baking ...";
    flip();
    rotate();
    BasicOven::bake();
}

void BadOven::flip()
{
    qInfo() <<this << "Flip a food";
}

void BadOven::rotate()
{
    qInfo() << this << "Rotate a food";
}
