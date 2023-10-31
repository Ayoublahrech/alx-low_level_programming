#include "main.h"

char *_putchar(char c)
{
    write(1, &c, 1);
    return (&c);
}
