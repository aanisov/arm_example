#define __used         __attribute__((__used__))
#define __section(s)   __used __attribute__((__section__(s)))
#define __initdata     __section(".init.data")

