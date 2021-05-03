#ifndef DESIGN_PATTERNS_PRODUCTB1_H
#define DESIGN_PATTERNS_PRODUCTB1_H
#include "AbstractProductB.h"

class ProductB1 : public AbstractProductB
{
public:
    ProductB1();
    virtual ~ProductB1();

    void eat();

};
#endif //DESIGN_PATTERNS_PRODUCTB1_H
