#include<stdio.h>
int i;
int fun();

int main()
{
    while(i)
    {
        fun();
        main();
    }
    printf("Hello\n");
    return 0;
}
int fun()
{
    printf("Hi");
}

/*Step 1: int i; The variable i is declared as an integer type.

Step 1: int fun(); This prototype tells the compiler that the function fun() does not accept any arguments and it returns an integer value.

Step 1: while(i) The value of i is not initialized so this while condition is failed. So, it does not execute the while block.

Step 1: printf("Hello\n"); It prints "Hello".

Hence the output of the program is "Hello".*/
