#include "hello-world.h"

int main(void)
{
    hello_world_func_t f = get_hello_world_func();

    if (!f)
        return 1;

    f();

    return 0;
}
