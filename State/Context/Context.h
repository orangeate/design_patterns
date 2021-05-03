#ifndef DESIGN_PATTERNS_CONTEXT_H
#define DESIGN_PATTERNS_CONTEXT_H
#include "../State/State.h"

class Context
{
public:
    Context();
    virtual ~Context();

    void changeState(State * st);
    void request();

private:
    State *m_pState;
};
#endif //DESIGN_PATTERNS_CONTEXT_H
