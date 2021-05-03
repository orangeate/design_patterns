#ifndef DESIGN_PATTERNS_CONCRETECOMPONENT_H
#define DESIGN_PATTERNS_CONCRETECOMPONENT_H

#include "Component.h"

class ConcreteComponent : public Component
{
public:
    ConcreteComponent();
    virtual ~ConcreteComponent();

    void operation();
};

#endif //DESIGN_PATTERNS_CONCRETECOMPONENT_H
