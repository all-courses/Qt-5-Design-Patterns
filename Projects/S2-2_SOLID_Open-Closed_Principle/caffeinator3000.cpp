#include "caffeinator3000.h"

Caffeinator3000::Caffeinator3000(QObject *parent) : QObject(parent)
{

}


void Caffeinator3000::addIngradients(QStringList &list)
{
    foreach(QString item, list){
        qInfo() << "Adding: "<<item;
    }
}

void Caffeinator3000::brew()
{
    qInfo() << "Heating";
    marketing();
    qInfo() << "Pour";
    qInfo() << "Beep";
}

void Caffeinator3000::marketing()
{
    qInfo() << "*********** Special Offer ************";
    qInfo() << "BUY ONE, GET ONE !!!....";
    qInfo() << "**************************************";
}
