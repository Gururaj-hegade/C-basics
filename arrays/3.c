#include<stdio.h>

int main()
{
    int arr[1]={10};
    printf("%d\n", 0[arr]);
    return 0;
}

/*Step 1: int arr[1]={10}; The variable arr[1] is declared as an integer array with size '2' and it's first element is initialized to value '10'(means arr[0]=10)

Step 2: printf("%d\n", 0[arr]); It prints the first element value of the variable arr.

Hence the output of the program is 10.*/
