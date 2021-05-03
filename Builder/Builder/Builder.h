#ifndef DESIGN_PATTERNS_BUILDER_H
#define DESIGN_PATTERNS_BUILDER_H
#include "../Product/Product.h"

class Builder
{

public:
    Builder();
    virtual ~Builder();

    virtual void buildPartA();
    virtual void buildPartB();
    virtual void buildPartC();
    virtual Product * getResult();

protected :
    Product * m_prod;
};
#endif //DESIGN_PATTERNS_BUILDER_H
