#include <iostream>
#include "hello-world-interface.h"
#include "hello-world-portuguese-impl.h"

void HelloWorldPortugueseImpl::SayHelloWorld(void) const
{
    std::cout << "Olá, mundo!\n";
}

const HelloWorldItf &HelloWorldItf::GetInstance(void)
{
    static HelloWorldPortugueseImpl instance;
    return instance;
}
