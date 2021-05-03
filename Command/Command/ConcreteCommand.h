#ifndef DESIGN_PATTERNS_CONCRETECOMMAND_H
#define DESIGN_PATTERNS_CONCRETECOMMAND_H
#include "Command.h"
#include "../Receiver/Receiver.h"

class ConcreteCommand : public Command
{
public:
    ConcreteCommand(Receiver * pReceiver);
    virtual ~ConcreteCommand();
    virtual void execute();
private:
    Receiver *m_pReceiver;

};
#endif //DESIGN_PATTERNS_CONCRETECOMMAND_H
