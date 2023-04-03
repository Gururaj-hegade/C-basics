#include<stdio.h>

int main()
{
    int fun(int);
    int i = fun(10);
    printf("%d\n", --i);
    return 0;
}
int fun(int i)
{
   return (i++);
}

/*Step 1: int fun(int); Here we declare the prototype of the function fun().

Step 2: int i = fun(10); The variable i is declared as an integer type and the result of the fun(10) will be stored in the variable i.

Step 3: int fun(int i){ return (i++); } Inside the fun() we are returning a value return(i++). It returns 10. because i++ is the post-increement operator.

Step 4: Then the control back to the main function and the value 10 is assigned to variable i.

Step 5: printf("%d\n", --i); Here --i denoted pre-increement. Hence it prints the value 9.*/
