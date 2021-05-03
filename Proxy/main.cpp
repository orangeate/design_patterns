#include <iostream>
#include "Subject/RealSubject.h"
#include "Proxy/Proxy.h"

using namespace std;

int main(int argc, char *argv[])
{
    Proxy proxy;
    proxy.request();

    return 0;
}
