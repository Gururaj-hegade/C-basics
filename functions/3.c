#include<stdio.h>
int reverse(int);

int main()
{
    int no=5;
    reverse(no);
    return 0;
}
int reverse(int no)
{
    if(no == 0)
        return 0;
    else
        printf("%d,", no);
    reverse (no--);
}

/*Step 1: int no=5; The variable no is declared as integer type and initialized to 5.

Step 2: reverse(no); becomes reverse(5); It calls the function reverse() with '5' as parameter.

The function reverse accept an integer number 5 and it returns '0'(zero) if(5 == 0) if the given number is '0'(zero) or else printf("%d,", no); it prints that number 5 and calls the function reverse(5);.

The function runs infinetely because the there is a post-decrement operator is used. It will not decrease the value of 'n' before calling the reverse() function. So, it calls reverse(5) infinitely.

Note: If we use pre-decrement operator like reverse(--n), then the output will be 5, 4, 3, 2, 1. Because before calling the function, it decrements the value of 'n'.*/
