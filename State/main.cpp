#include <iostream>
#include "Context/Context.h"
#include "State/ConcreteStateA.h"
#include "State/ConcreteStateB.h"

using namespace std;

int main(int argc, char *argv[])
{
    char a = '0';
    if('0' == a)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    Context * c = new Context();
    c->request();
    c->request();
    c->request();

    delete c;
    return 0;
}
