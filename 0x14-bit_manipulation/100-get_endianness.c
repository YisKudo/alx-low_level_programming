#include "main.h"

int get_endianness(void)
{
    unsigned int x = 1;
    char *c = (char*)&x;
    return (*c == 1) ? 1 : 0;
}
