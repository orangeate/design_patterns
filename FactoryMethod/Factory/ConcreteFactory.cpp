#include "ConcreteFactory.h"
#include "../Product/ConcreteProduct.h"

ConcreteFactory::ConcreteFactory()
{

}

ConcreteFactory::~ConcreteFactory()
{

}

Product* ConcreteFactory::factoryMethod()
{
    return new ConcreteProduct();
}