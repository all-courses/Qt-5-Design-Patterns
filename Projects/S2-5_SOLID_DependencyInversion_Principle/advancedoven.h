#ifndef ADVANCEDOVEN_H
#define ADVANCEDOVEN_H

#include <QObject>
#include <QDebug>
#include "interfaces/iOven.h"
#include "interfaces/iEvenHeat.h"

class AdvancedOven : public QObject,public iOven,public iEvenHeat
{
    Q_OBJECT
public:
    explicit AdvancedOven(QObject *parent = nullptr);

signals:


    // iEvenHeat interface
public:
    void flip() override;
    void rotate() override;

    // iOven interface
public:
    void bake() override;
};

#endif // ADVANCEDOVEN_H
