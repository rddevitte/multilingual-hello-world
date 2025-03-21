#ifndef HELLO_WORLD_INTERFACE_H
#define HELLO_WORLD_INTERFACE_H

class HelloWorldItf
{
   public:
    virtual ~HelloWorldItf() = default;

    static const HelloWorldItf &GetInstance(void);

    virtual void SayHelloWorld(void) const = 0;
};

#endif  // HELLO_WORLD_INTERFACE_H
