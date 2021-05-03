#include <iostream>
#include "Subject/Subject.h"
#include "Observer/Observer.h"
#include "Observer/ConcreteObserver.h"
#include "Subject/ConcreteSubject.h"

using namespace std;

int main(int argc, char *argv[])
{
    Subject * subject = new ConcreteSubject();
    Observer * objA = new ConcreteObserver("A");
    Observer * objB = new ConcreteObserver("B");
    subject->attach(objA);
    subject->attach(objB);

    subject->setState(1);
    subject->notify();

    cout << "--------------------" << endl;
    subject->detach(objB);
    subject->setState(2);
    subject->notify();

    delete subject;
    delete objA;
    delete objB;

    return 0;
}
