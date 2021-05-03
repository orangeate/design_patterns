#include "Factory.h"
#include "../Product/ConcreteProductA.h"
#include "../Product/ConcreteProductB.h"

Factory::Factory()
{

}

Factory::~Factory()
{

}

Product* Factory::createProduct(string proname)
{
    if ( "A" == proname )
    {
        return new ConcreteProductA();
    }
    else if("B" == proname)
    {
        return new ConcreteProductB();
    }
    return NULL;
}