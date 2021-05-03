#ifndef DESIGN_PATTERNS_FACTORY_H
#define DESIGN_PATTERNS_FACTORY_H
#include <iostream>
#include "../Product/Product.h"

class Factory
{
public:
    Factory();
    virtual ~Factory();

    virtual Product* factoryMethod();
};

#endif //DESIGN_PATTERNS_FACTORY_H
