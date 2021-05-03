#ifndef DESIGN_PATTERNS_DECORATOR_H
#define DESIGN_PATTERNS_DECORATOR_H
#include "../Component/Component.h"

class Decorator : public Component
{

public:
    Decorator(Component* pcmp);
    virtual ~Decorator();

    void operation();

private:
    Component * m_pComponent;

};

#endif //DESIGN_PATTERNS_DECORATOR_H
