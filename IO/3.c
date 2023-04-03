#include<stdio.h>

int main()
{
    int i;
    i = scanf("%d %d", &i, &i);
    printf("%d\n", i);
    return 0;
}

/*scanf() returns the number of variables to which you are provding the input.
i = scanf("%d %d", &i, &i); Here Scanf() returns 2. So i = 2.

printf("%d\n", i); Here it prints 2*/
