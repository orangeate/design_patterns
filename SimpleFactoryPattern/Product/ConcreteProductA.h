#ifndef DESIGN_PATTERNS_CONCRETE_PRODUCTA_H
#define DESIGN_PATTERNS_CONCRETE_PRODUCTA_H
#include "Product.h"

class ConcreteProductA : public Product
{
public:
    ConcreteProductA();
    virtual ~ConcreteProductA();

    virtual void Use();
};

#endif // DESIGN_PATTERNS_CONCRETE_PRODUCTA_H
