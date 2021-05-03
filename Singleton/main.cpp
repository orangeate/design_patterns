#include <iostream>
#include "Singleton/Singleton.h"
using namespace std;

int main(int argc, char *argv[])
{
    Singleton * sg = Singleton::getInstance();
    sg->singletonOperation();

    return 0;
}
