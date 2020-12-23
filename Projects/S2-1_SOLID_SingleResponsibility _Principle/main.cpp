#include <QCoreApplication>
#include "tempconverter.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo()<<"Temperature Converter";

    tempconverter t;
    int value=50;

    qInfo() << " c to f "<<t.censiusToFahrenheit(value);
    qInfo() << " f to c "<<t.fahrenheitToCensius(value);


    return a.exec();
}
