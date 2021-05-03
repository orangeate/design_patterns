#ifndef DESIGN_PATTERNS_REFINEDABSTRACTION_H
#define DESIGN_PATTERNS_REFINEDABSTRACTION_H
#include "Abstraction.h"

class RefinedAbstraction : public Abstraction
{
public:
    RefinedAbstraction();
    RefinedAbstraction(Implementor* imp);
    virtual ~RefinedAbstraction();

    virtual void operation();

};
#endif //DESIGN_PATTERNS_REFINEDABSTRACTION_H
