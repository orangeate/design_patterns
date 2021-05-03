#ifndef DESIGN_PATTERNS_MEDIATOR_H
#define DESIGN_PATTERNS_MEDIATOR_H
#include <string>
using namespace std;

class Colleague;

class Mediator
{
public:
    Mediator();
    virtual ~Mediator();

    virtual void operation(int nWho,string str);
    virtual void registered(int nWho, Colleague * aColleague);

};
#endif //DESIGN_PATTERNS_MEDIATOR_H
