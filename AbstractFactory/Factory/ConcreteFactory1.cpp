#include "ConcreteFactory1.h"
#include "../Product/ProductA1.h"
#include "../Product/ProductB1.h"

ConcreteFactory1::ConcreteFactory1()
{

}

ConcreteFactory1::~ConcreteFactory1()
{

}

AbstractProductA * ConcreteFactory1::createProductA()
{
    return new ProductA1();
}

AbstractProductB * ConcreteFactory1::createProductB()
{
    return new ProductB1();
}