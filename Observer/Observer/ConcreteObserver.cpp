#include "ConcreteObserver.h"
#include <iostream>
#include <vector>
#include "../Subject/Subject.h"
using namespace std;

ConcreteObserver::ConcreteObserver(string name)
{
    m_objName = name;
}

ConcreteObserver::~ConcreteObserver()
{

}

void ConcreteObserver::update(Subject * sub)
{
    m_ObserverState = sub->getState();
    cout << "update oberserver[" << m_objName << "] state:" << m_ObserverState << endl;
}
