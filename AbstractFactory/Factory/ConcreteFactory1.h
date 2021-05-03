#ifndef DESIGN_PATTERNS_CONCRETEFACTORY1_H
#define DESIGN_PATTERNS_CONCRETEFACTORY1_H
#include "AbstractFactory.h"
#include "../Product/AbstractProductA.h"
#include "../Product/AbstractProductB.h"

class ConcreteFactory1 : public AbstractFactory
{
public:
    ConcreteFactory1();
    virtual ~ConcreteFactory1();

    virtual AbstractProductA * createProductA();
    virtual AbstractProductB * createProductB();

};
#endif //DESIGN_PATTERNS_CONCRETEFACTORY1_H
