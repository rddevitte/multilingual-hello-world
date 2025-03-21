#ifndef HELLO_WORLD_ENGLISH_IMPL_H
#define HELLO_WORLD_ENGLISH_IMPL_H

#include "hello-world-interface.h"

class HelloWorldEnglishImpl : public HelloWorldItf
{
   public:
    void SayHelloWorld(void) const override;
};

#endif  // HELLO_WORLD_ENGLISH_IMPL_H
