#include <iostream>
#include "Command/ConcreteCommand.h"
#include "Invoker/Invoker.h"
#include "Receiver/Receiver.h"

using namespace std;

int main(int argc, char *argv[])
{
    Receiver * pReceiver = new Receiver();
    ConcreteCommand * pCommand = new ConcreteCommand(pReceiver);
    Invoker * pInvoker = new Invoker(pCommand);
    pInvoker->call();

    delete pReceiver;
    delete pCommand;
    delete pInvoker;
    return 0;
}
