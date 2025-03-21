#include <stdio.h>
#include "hello-world.h"

static void hello_world_english_impl(void)
{
    puts("Hello, world!");
}

hello_world_func_t get_hello_world_func(void)
{
    return &hello_world_english_impl;
}
