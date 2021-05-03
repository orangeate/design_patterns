#ifndef DESIGN_PATTERNS_CONTEXT_H
#define DESIGN_PATTERNS_CONTEXT_H

#include "../Strategy/Strategy.h"

class Context
{
public:
    Context();
    virtual ~Context();

    void algorithm();
    void setStrategy(Strategy* st);

private:
    Strategy *m_pStrategy;
};
#endif //DESIGN_PATTERNS_CONTEXT_H
