#include "Factory/Factory.h"
#include "Factory/ConcreteFactory.h"
#include "Product/Product.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    Factory * fc = new ConcreteFactory();
    Product * prod = fc->factoryMethod();
    prod->use();

    delete fc;
    delete prod;

    return 0;
}
