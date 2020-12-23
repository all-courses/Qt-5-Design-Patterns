#include <QCoreApplication>
#include <QTcpSocket>
#include "mysocket.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //QTcpSocket socket;
    MySocket socket;

    qInfo() << "Connecting ....";
    socket.connectToHost("voidrealms.com",80);
    socket.waitForConnected();

    qInfo() << "Connected ...";

    qInfo() << "Closing socket ...";
    socket.close();

    if(socket.isOpen()){
        qInfo() << "WAITING FOR CONNECTION TO BE CLOSED !!!....";
        socket.waitForDisconnected();
    }

    qInfo() << "Completed ...";

    return a.exec();
}
