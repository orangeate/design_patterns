#include <iostream>
#include "Component/Component.h"
#include "Component/ConcreteComponent.h"

#include "Decorator/ConcreteDecoratorA.h"
#include "Decorator/ConcreteDecoratorB.h"

using namespace std;

int main(int argc, char *argv[])
{
    ConcreteComponent * pRealProd = new ConcreteComponent();

    Component * pA = new ConcreteDecoratorA(pRealProd);
    pA->operation();

    Component * pB = new ConcreteDecoratorB(pA);
    pB->operation();

    delete pRealProd;
    delete pA;
    delete pB;

    return 0;
}
