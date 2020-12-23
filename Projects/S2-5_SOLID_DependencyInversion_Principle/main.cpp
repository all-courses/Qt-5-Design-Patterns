#include <QCoreApplication>

#include <QDebug>
#include "interfaces/iOven.h"
#include "basicoven.h"
#include "advancedoven.h"
#include "badoven.h"

void cook(iOven *oven){
    oven->bake();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    BasicOven basicOven;
    AdvancedOven advancedOven;
    BadOven badOven;

    cook(&basicOven);
    cook(&advancedOven);
    cook(&badOven);

    return a.exec();
}
