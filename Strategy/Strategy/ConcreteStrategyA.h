#ifndef DESIGN_PATTERNS_CONCRETESTRATEGYA_H
#define DESIGN_PATTERNS_CONCRETESTRATEGYA_H

#include "Strategy.h"

class ConcreteStrategyA : public Strategy
{
public:
    ConcreteStrategyA();
    virtual ~ConcreteStrategyA();

    virtual void algorithm();
};


#endif //DESIGN_PATTERNS_CONCRETESTRATEGYA_H
