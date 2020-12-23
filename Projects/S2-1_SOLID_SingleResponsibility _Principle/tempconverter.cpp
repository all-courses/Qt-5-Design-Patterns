#include "tempconverter.h"

tempconverter::tempconverter(QObject *parent) : QObject(parent)
{

}

int tempconverter::censiusToFahrenheit(int value)
{
    auto o =(value * 9.0) / 5.0 + 32;
    return  o;
}

int tempconverter::fahrenheitToCensius(int value)
{
    auto o = (value - 32) * 5.0 / 9.0;
    return o;
}
