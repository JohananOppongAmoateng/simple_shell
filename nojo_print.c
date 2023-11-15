#include "main.h"


/* prototype below prints command */


void nojo_print(const char *letyouknow)
{
    write(STDOUT_FILENO,letyouknow,strlen(letyouknow));
}
