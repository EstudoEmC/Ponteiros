#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var = 15;
    int *ptr;

    ptr = &var;

    char inteiro[] = "%d\n"; //array de caracteres para formar a string
    char endereco[] = "%p\n";
    //char flutuante[] = "%f\n";

    printf(inteiro, var);
    printf(endereco, ptr); //endereço
    printf(inteiro, *ptr);

    //while(1);
    return 0;
}