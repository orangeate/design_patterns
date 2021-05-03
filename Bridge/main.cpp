#include <iostream>
#include "Implementor/ConcreteImplementorA.h"
#include "Implementor/ConcreteImplementorB.h"
#include "Abstraction/RefinedAbstraction.h"
#include "Abstraction/Abstraction.h"

using namespace std;

int main(int argc, char *argv[])
{

    Implementor * pImp = new ConcreteImplementorA();
    Abstraction * pa = new RefinedAbstraction(pImp);
    pa->operation();

    Abstraction * pb = new RefinedAbstraction(new ConcreteImplementorB());
    pb->operation();

    delete pa;
    delete pb;

    return 0;
}
