#include<stdio.h>

int main()
{
    int i;
    char c;
    for(i=1; i<=5; i++)
    {
        scanf("%c", &c); /* given input is 'b' */
        ungetc(c, stdout);
        printf("%c", c);
        ungetc(c, stdin);
    }
    return 0;
}

/*The ungetc() function pushes the character c back onto the named input stream, which must be open for reading.

This character will be returned on the next call to getc or fread for that stream.

One character can be pushed back in all situations.

A second call to ungetc without a call to getc will force the previous character to be forgotten.*/
