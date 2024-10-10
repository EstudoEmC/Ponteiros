#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var = 15;
    int *ptr;

    ptr = &var;

    printf("%d\n", var);
    printf("%p\n", ptr); //endereço
    printf("%d\n", *ptr);

    while(1);
    return 0;
}