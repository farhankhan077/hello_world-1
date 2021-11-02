#include<stdio.h>   
#include "../include/header.h"
char *sgs_clib_strrchr(const char *str, int c);
int main()
{
    char string[] = "mohammad farhan khan";
    
    int character = 'f';
    
    char *pch; 
    pch = sgs_clib_strrchr(string,character);

    printf("Last occurence of %c found at position %ld \n",character,pch-string+1);
    printf("And the string after the %c is %s",character,pch);

    return 0;
}