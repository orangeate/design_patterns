#ifndef DESIGN_PATTERNS_CONCRETEIMPLEMENTORA_H
#define DESIGN_PATTERNS_CONCRETEIMPLEMENTORA_H
#include "Implementor.h"

class ConcreteImplementorA : public Implementor
{
public:
    ConcreteImplementorA();
    virtual ~ConcreteImplementorA();

    virtual void operationImp();
};
#endif //DESIGN_PATTERNS_CONCRETEIMPLEMENTORA_H
