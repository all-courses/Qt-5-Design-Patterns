#include "advancedoven.h"

AdvancedOven::AdvancedOven(QObject *parent) : QObject(parent)
{

}


void AdvancedOven::flip()
{
    qInfo() << this <<"Fliping item ...";
}

void AdvancedOven::rotate()
{
    qInfo() << this <<"Rotating Item ...";
}

void AdvancedOven::bake()
{
    qInfo() << this <<"Start baking ...";
    rotate();
    qInfo() << this <<"Baking continuously ...";
    flip();
    qInfo() << this <<"Baking continuously ...";
    rotate();
}
