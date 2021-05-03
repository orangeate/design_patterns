#ifndef DESIGN_PATTERNS_CONCRETEIMPLEMENTORB_H
#define DESIGN_PATTERNS_CONCRETEIMPLEMENTORB_H
#include "Implementor.h"

class ConcreteImplementorB : public Implementor
{
public:
    ConcreteImplementorB();
    virtual ~ConcreteImplementorB();

    virtual void operationImp();
};
#endif //DESIGN_PATTERNS_CONCRETEIMPLEMENTORB_H
