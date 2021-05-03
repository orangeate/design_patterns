#ifndef DESIGN_PATTERNS_CONCRETECOLLEAGUEB_H
#define DESIGN_PATTERNS_CONCRETECOLLEAGUEB_H
#include "Colleague.h"

class ConcreteColleagueB : public Colleague
{
public:
    ConcreteColleagueB();
    virtual ~ConcreteColleagueB();

    virtual void sendmsg(int toWho,string str);
    virtual void receivemsg(string str);
};
#endif //DESIGN_PATTERNS_CONCRETECOLLEAGUEB_H
