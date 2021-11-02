#include <stdio.h>
#include "../include/header.h"

char *sgs_clib_strrchr(const char *str, int c)
{   int count = 0;
   
    char *a;
    for (; *str != '\0'; ++str)
    {   if (*str == c)
        {    a = (char *) str;
            count = 1;
        }
    }
    if(count==1)
    return a;

return NULL;
}