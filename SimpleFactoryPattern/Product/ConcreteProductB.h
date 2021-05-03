#ifndef DESIGN_PATTERNS_CONCRETE_PRODUCTB_H
#define DESIGN_PATTERNS_CONCRETE_PRODUCTB_H
#include "Product.h"

class ConcreteProductB : public Product
{
public:
    ConcreteProductB();
    virtual ~ConcreteProductB();

    virtual void Use();
};

#endif //DESIGN_PATTERNS_CONCRETE_PRODUCTB_H
