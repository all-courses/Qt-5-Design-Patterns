#ifndef CAFFEINATOR3000_H
#define CAFFEINATOR3000_H

#include <QObject>
#include <QDebug>
#include <QStringList>
#include "interfaces/ibrew.h"

class Caffeinator3000 : public QObject,public iBrew
{
    Q_OBJECT
public:
    explicit Caffeinator3000(QObject *parent = nullptr);

signals:


    // iBrew interface
public:
    void addIngradients(QStringList &list) override;
    void brew() override;
    void marketing();
};

#endif // CAFFEINATOR3000_H
