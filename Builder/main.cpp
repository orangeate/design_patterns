#include <iostream>
#include "Builder/ConcreteBuilder.h"
#include "Director/Director.h"
#include "Builder/Builder.h"
#include "Product/Product.h"

using namespace std;

int main(int argc, char *argv[])
{
    ConcreteBuilder * builder = new ConcreteBuilder();
    Director  director;
    director.setBuilder(builder);
    Product * pd =  director.constuct();
    pd->show();

    delete builder;
    delete pd;
    return 0;
}
