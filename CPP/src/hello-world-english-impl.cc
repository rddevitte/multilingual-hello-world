#include <iostream>
#include "hello-world-interface.h"
#include "hello-world-english-impl.h"

void HelloWorldEnglishImpl::SayHelloWorld(void) const
{
    std::cout << "Hello, world!\n";
}


const HelloWorldItf &HelloWorldItf::GetInstance(void)
{
    static HelloWorldEnglishImpl instance;
    return instance;
}
