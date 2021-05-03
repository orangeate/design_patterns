#include "ConcreteBuilder.h"

ConcreteBuilder::ConcreteBuilder()
{

}

ConcreteBuilder::~ConcreteBuilder()
{

}

void ConcreteBuilder::buildPartA()
{
    m_prod->setA("A Style "); //不同的建造者，可以实现不同产品的建造
}

void ConcreteBuilder::buildPartB()
{
    m_prod->setB("B Style ");
}

void ConcreteBuilder::buildPartC()
{
    m_prod->setC("C style ");
}