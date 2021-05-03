#ifndef DESIGN_PATTERNS_CONCRETEFACTORY2_H
#define DESIGN_PATTERNS_CONCRETEFACTORY2_H
#include "AbstractFactory.h"
#include "../Product/AbstractProductA.h"
#include "../Product/AbstractProductB.h"

class ConcreteFactory2 : public AbstractFactory
{
public:
    ConcreteFactory2();
    virtual ~ConcreteFactory2();

    virtual AbstractProductA * createProductA();
    virtual AbstractProductB * createProductB();

};
#endif //DESIGN_PATTERNS_CONCRETEFACTORY2_H
