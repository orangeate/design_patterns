#include <iostream>
#include "Context/Context.h"
#include "Strategy/ConcreteStrategyA.h"
#include "Strategy/ConcreteStrategyB.h"
#include "Strategy/Strategy.h"
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    Context * cxt = new Context();

    Strategy * s1 = new ConcreteStrategyA();
    cxt->setStrategy(s1);
    cxt->algorithm();

    Strategy *s2 = new ConcreteStrategyB();
    cxt->setStrategy(s2);
    cxt->algorithm();

    delete s1;
    delete s2;

    return 0;
}
