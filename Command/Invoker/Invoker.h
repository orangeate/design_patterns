#ifndef DESIGN_PATTERNS_INVOKER_H
#define DESIGN_PATTERNS_INVOKER_H
#include "../Command/Command.h"

class Invoker
{
public:
    Invoker(Command * pCommand);
    virtual ~Invoker();
    void call();

private:
    Command *m_pCommand;
};
#endif //DESIGN_PATTERNS_INVOKER_H
