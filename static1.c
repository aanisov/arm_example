#include "initdata.h"
//static int __attribute__((__used__)) __attribute__((__section__(".init.data"))) static_init_data;
static int __initdata static_init_data;
static int static_data;

void static1_dummy_func(int data)
{
    static_init_data = data;
    static_data = data;
}

