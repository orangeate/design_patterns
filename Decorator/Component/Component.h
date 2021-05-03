#ifndef DESIGN_PATTERNS_COMPONENT_H
#define DESIGN_PATTERNS_COMPONENT_H

class Component
{
public:
    Component();
    virtual ~Component();

    virtual void operation();
};

#endif //DESIGN_PATTERNS_COMPONENT_H
