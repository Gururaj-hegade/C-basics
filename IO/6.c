#include<stdio.h>

int main()
{
    int i;
    char c;
    for(i=1; i<=5; i++)
    {
        scanf("%c", &c); /* given input is 'a' */
        printf("%c", c);
        ungetc(c, stdin);
    }
    return 0;
}

/*for(i=1; i<=5; i++) Here the for loop runs 5 times.

Loop 1:
scanf("%c", &c); Here we give 'a' as input.
printf("%c", c); prints the character 'a' which is given in the previous "scanf()" statement.
ungetc(c, stdin); "ungetc()" function pushes character 'a' back into input stream.

Loop 2:
Here the scanf("%c", &c); get the input from "stdin" because of "ungetc" function.
printf("%c", c); Now variable c = 'a'. So it prints the character 'a'.
ungetc(c, stdin); "ungetc()" function pushes character 'a' back into input stream.

This above process will be repeated in Loop 3, Loop 4, Loop 5.*/
