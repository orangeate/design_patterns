#ifndef DESIGN_PATTERNS_CONCRETEDECORATORA_H
#define DESIGN_PATTERNS_CONCRETEDECORATORA_H
#include "Decorator.h"
#include "../Component/Component.h"

class ConcreteDecoratorA : public Decorator
{
public:
    ConcreteDecoratorA(Component* pcmp);
    virtual ~ConcreteDecoratorA();

    void addBehavior();
    virtual void operation();
};

#endif //DESIGN_PATTERNS_CONCRETEDECORATORA_H
