#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H

#include <QObject>
#include <QDebug>
#include <QStringList>
#include "interfaces/ibrew.h"

class CoffeeMachine : public QObject,public iBrew
{
    Q_OBJECT
public:
    explicit CoffeeMachine(QObject *parent = nullptr);

signals:


    // iBrew interface
public:
    void addIngradients(QStringList &list) override;
    void brew() override;
};

#endif // COFFEEMACHINE_H
