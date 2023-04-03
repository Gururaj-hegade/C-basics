#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i=0;
    i++;
    if(i<=5)
    {
        printf("IndiaBIX");
        exit(1);
        main();
    }
    return 0;
}



/*Step 1: int i=0; The variable i is declared as in integer type and initialized to '0'(zero).

Step 2: i++; Here variable i is increemented by 1. Hence i becomes '1'(one).

Step 3: if(i<=5) becomes if(1 <=5). Hence the if condition is satisfied and it enter into if block statements.

Step 4: printf("IndiaBIX"); It prints "IndiaBIX".

Step 5: exit(1); This exit statement terminates the program execution.

Hence the output is "IndiaBIx".*/

//in
/*f(int a, int b)
{
    int a;
    a = 20;
    return a;
}*/

//redeclaration of a is error*/
