#include "mysocket.h"

MySocket::MySocket(QTcpSocket *parent) : QTcpSocket(parent)
{

}


void MySocket::close()
{
    qInfo()<< "Doing some steps before closing socket ....";


    //QTcpSocket::close();  // forgot to close socket
}
