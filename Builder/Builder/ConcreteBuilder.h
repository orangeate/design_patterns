#ifndef DESIGN_PATTERNS_CONCRETEBUILDER_H
#define DESIGN_PATTERNS_CONCRETEBUILDER_H
#include "Builder.h"

class ConcreteBuilder : public Builder
{

public:
    ConcreteBuilder();
    virtual ~ConcreteBuilder();

    virtual void buildPartA();
    virtual void buildPartB();
    virtual void buildPartC();

};
#endif //DESIGN_PATTERNS_CONCRETEBUILDER_H
