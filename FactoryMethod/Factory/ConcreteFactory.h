#ifndef DESIGN_PATTERNS_CONCRETEFACTORY_H
#define DESIGN_PATTERNS_CONCRETEFACTORY_H
#include "../Product/Product.h"
#include "Factory.h"

class ConcreteFactory : public Factory
{
public:
    ConcreteFactory();
    virtual ~ConcreteFactory();

    virtual Product* factoryMethod();

};
#endif //DESIGN_PATTERNS_CONCRETEFACTORY_H
