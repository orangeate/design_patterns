#ifndef DESIGN_PATTERNS_ABSTRACTFACTORY_H
#define DESIGN_PATTERNS_ABSTRACTFACTORY_H
#include "../Product/AbstractProductA.h"
#include "../Product/AbstractProductB.h"

class AbstractFactory
{
public:
    AbstractFactory();
    virtual ~AbstractFactory();

    virtual AbstractProductA * createProductA() = 0;
    virtual AbstractProductB * createProductB() = 0;

};
#endif //DESIGN_PATTERNS_ABSTRACTFACTORY_H
