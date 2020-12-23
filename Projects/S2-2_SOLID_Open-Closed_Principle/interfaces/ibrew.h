#ifndef IBREW_H
#define IBREW_H

#include<QStringList>

class iBrew{
public:
    virtual void addIngradients(QStringList &list) = 0;
    virtual void brew() = 0;
};

#endif // IBREW_H
