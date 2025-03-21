#include "hello-world-interface.h"

int main(void)
{
    const HelloWorldItf &h = HelloWorldItf::GetInstance();

    h.SayHelloWorld();

    return 0;
}

