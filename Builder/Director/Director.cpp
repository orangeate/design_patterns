#include "Director.h"

Director::Director()
{

}

Director::~Director()
{

}

Product* Director::constuct()
{
    m_pbuilder->buildPartA();
    m_pbuilder->buildPartB();
    m_pbuilder->buildPartC();

    return m_pbuilder->getResult();
}


void Director::setBuilder(Builder* buider)
{
    m_pbuilder = buider;
}