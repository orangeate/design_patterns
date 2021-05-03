#ifndef DESIGN_PATTERNS_CONCRETEPRODUCT_H
#define DESIGN_PATTERNS_CONCRETEPRODUCT_H
#include "Product.h"

class ConcreteProduct : public Product
{
public:
    ConcreteProduct();
    virtual ~ConcreteProduct();

    virtual void use();
};

#endif //DESIGN_PATTERNS_CONCRETEPRODUCT_H
