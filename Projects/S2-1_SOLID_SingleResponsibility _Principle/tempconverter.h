#ifndef TEMPCONVERTER_H
#define TEMPCONVERTER_H

#include <QObject>

// SOLID - Single responsibility principle: only func related to temp converter, no utility & other func
class tempconverter : public QObject
{
    Q_OBJECT
public:
    explicit tempconverter(QObject *parent = nullptr);

    int censiusToFahrenheit(int value);
    int fahrenheitToCensius(int value);

signals:

};

#endif // TEMPCONVERTER_H
