#ifndef DESIGN_PATTERNS_PRODUCTA1_H
#define DESIGN_PATTERNS_PRODUCTA1_H
#include "AbstractProductA.h"

class ProductA1 : public AbstractProductA
{
public:
    ProductA1();
    virtual ~ProductA1();

    void use();
};
#endif //DESIGN_PATTERNS_PRODUCTA1_H
