#ifndef DESIGN_PATTERNS_CONCRETEFLYWEIGHT_H
#define DESIGN_PATTERNS_CONCRETEFLYWEIGHT_H
#include "Flyweight.h"
#include <string>
using namespace std;

class ConcreteFlyweight : public Flyweight
{
public:
    ConcreteFlyweight(string str);
    virtual ~ConcreteFlyweight();

    virtual void operation();

private:
    string intrinsicState;
};
#endif //DESIGN_PATTERNS_CONCRETEFLYWEIGHT_H
