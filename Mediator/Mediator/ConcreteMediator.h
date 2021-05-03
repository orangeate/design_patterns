#ifndef DESIGN_PATTERNS_CONCRETEMEDIATOR_H
#define DESIGN_PATTERNS_CONCRETEMEDIATOR_H
#include "Mediator.h"
#include "../Colleague/ConcreteColleagueA.h"
#include "../Colleague/ConcreteColleagueB.h"
#include <map>
using namespace std;

class ConcreteMediator : public Mediator
{
public:
    ConcreteMediator();
    virtual ~ConcreteMediator();

    virtual void operation(int nWho,string str);
    virtual void registered(int nWho, Colleague * aColleague);
private:
    map<int,Colleague*> m_mpColleague;
};
#endif //DESIGN_PATTERNS_CONCRETEMEDIATOR_H
