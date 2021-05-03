#ifndef DESIGN_PATTERNS_COLLEAGUE_H
#define DESIGN_PATTERNS_COLLEAGUE_H
#include "../Mediator/Mediator.h"
#include <string>
using namespace std;

class Colleague
{
public:
    Colleague();
    virtual ~Colleague();

    virtual void receivemsg(string str);
    virtual void sendmsg(int toWho,string str);
    void setMediator(Mediator * aMediator);
protected:
    Mediator * m_pMediator;

};
#endif //DESIGN_PATTERNS_COLLEAGUE_H
