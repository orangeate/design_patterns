#include "ConcreteDecoratorA.h"
#include <iostream>
using namespace std;

ConcreteDecoratorA::ConcreteDecoratorA(Component* pcmp)
        :Decorator(pcmp)
{

}

ConcreteDecoratorA::~ConcreteDecoratorA()
{

}

void ConcreteDecoratorA::addBehavior()
{
    cout << "addBehavior A" << endl;
}


void ConcreteDecoratorA::operation()
{
    Decorator::operation();
    addBehavior();
}