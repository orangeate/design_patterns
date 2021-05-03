#ifndef DESIGN_PATTERNS_CONCRETESTRATEGYB_H
#define DESIGN_PATTERNS_CONCRETESTRATEGYB_H

#include "Strategy.h"

class ConcreteStrategyB : public Strategy
{
public:
    ConcreteStrategyB();
    virtual ~ConcreteStrategyB();

    virtual void algorithm();
};


#endif //DESIGN_PATTERNS_CONCRETESTRATEGYB_H
