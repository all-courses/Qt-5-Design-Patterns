#ifndef AEROPLANE_H
#define AEROPLANE_H

#include <QObject>
#include <QDebug>
#include "interfaces/iFlying.h"
#include "interfaces/iMachine.h"

class Aeroplane : public QObject,public iFlying,public iMachine
{
    Q_OBJECT
public:
    explicit Aeroplane(QObject *parent = nullptr);

signals:


    // iMachine interface
public:
    void refuel() override;

    // iFlying interface
public:
    void fly() override;
    void land() override;
};

#endif // AEROPLANE_H
