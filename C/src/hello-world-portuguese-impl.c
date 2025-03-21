#include <stdio.h>
#include "hello-world.h"

static void hello_world_portuguese_impl(void)
{
    puts("Olá, mundo!");
}

hello_world_func_t get_hello_world_func(void)
{
    return &hello_world_portuguese_impl;
}
