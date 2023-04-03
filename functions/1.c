#include<stdio.h>

int main()
{
    int fun();
    int i;
    i = fun();
    printf("%d\n", i);
    return 0;
}
int fun()
{
    _AX = 1990;
}

/*Turbo C (Windows): The return value of the function is taken from the Accumulator _AX=1990.

But it may not work as expected in GCC compiler (Linux).*/
