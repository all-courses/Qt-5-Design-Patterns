#ifndef SHOP_H
#define SHOP_H

#include <QObject>
#include "interfaces/ibrew.h"
#include<QDebug>

class Shop : public QObject
{
    Q_OBJECT
public:
    explicit Shop(QObject *parent = nullptr);

    void sellDrinks(QStringList list,iBrew *machine);


signals:

};

#endif // SHOP_H
