#ifndef DESIGN_PATTERNS_CONCRETESTATEB_H
#define DESIGN_PATTERNS_CONCRETESTATEB_H
#include "State.h"

class ConcreteStateB : public State
{

public:
    static State * Instance();

    virtual ~ConcreteStateB();

    virtual void handle(Context * c);
private:
    ConcreteStateB();
    static State * m_pState;
};
#endif //DESIGN_PATTERNS_CONCRETESTATEB_H
