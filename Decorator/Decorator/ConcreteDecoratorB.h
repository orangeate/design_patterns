#ifndef DESIGN_PATTERNS_CONCRETEDECORATORB_H
#define DESIGN_PATTERNS_CONCRETEDECORATORB_H

#include "Decorator.h"
#include "../Component/Component.h"

class ConcreteDecoratorB : public Decorator
{

public:
    ConcreteDecoratorB(Component* pcmp);
    virtual ~ConcreteDecoratorB();

    void addBehavior();
    virtual void operation();

};

#endif //DESIGN_PATTERNS_CONCRETEDECORATORB_H
