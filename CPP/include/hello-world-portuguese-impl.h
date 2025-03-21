#ifndef HELLO_WORLD_PORTUGUESE_IMPL_H
#define HELLO_WORLD_PORTUGUESE_IMPL_H

#include "hello-world-interface.h"

class HelloWorldPortugueseImpl : public HelloWorldItf
{
   public:
    void SayHelloWorld(void) const override;
};

#endif  // HELLO_WORLD_PORTUGUESE_IMPL_H
