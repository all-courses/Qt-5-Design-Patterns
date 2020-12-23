#include <QCoreApplication>
#include<QtDebug>
#include<QStringList>

#include "shop.h"
#include "coffeemachine.h"
#include "caffeinator3000.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Shop shop;
    QStringList list;
    CoffeeMachine machine1;
    Caffeinator3000 machine2;

    list<<"Sugar"<<"Flavouring";

    shop.sellDrinks(list,&machine2);


    return a.exec();
}
