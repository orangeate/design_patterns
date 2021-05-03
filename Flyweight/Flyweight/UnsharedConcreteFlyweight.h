#ifndef DESIGN_PATTERNS_UNSHAREDCONCRETEFLYWEIGHT_H
#define DESIGN_PATTERNS_UNSHAREDCONCRETEFLYWEIGHT_H
#include "Flyweight.h"

class UnsharedConcreteFlyweight : public Flyweight
{
public:
    UnsharedConcreteFlyweight();
    virtual ~UnsharedConcreteFlyweight();

    void operation();

private:
    int allState;
};
#endif //DESIGN_PATTERNS_UNSHAREDCONCRETEFLYWEIGHT_H
