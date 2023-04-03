#include<stdio.h>

int main()
{
    int i;
    i = printf("How r u\n");
    i = printf("%d\n", i);
    printf("%d\n", i);
    return 0;
}

/*In the program, printf() returns the number of charecters printed on the console
i = printf("How r u\n"); This line prints "How r u" with a new line character and returns the length of string printed then assign it to variable i.
So i = 8 (length of '\n' is 1).

i = printf("%d\n", i); In the previous step the value of i is 8. So it prints "8" with a new line character and returns the length of string printed then assign it to variable i. So i = 2 (length of '\n' is 1).

printf("%d\n", i); In the previous step the value of i is 2. So it prints "2".*/
