#include "shop.h"

Shop::Shop(QObject *parent) : QObject(parent)
{

}

void Shop::sellDrinks(QStringList list, iBrew *machine)
{
    qInfo() << "Take the order";
    machine->addIngradients(list);
    machine->brew();
    qInfo() << "Take Payment";
    qInfo() << "Give customer their order";
}
