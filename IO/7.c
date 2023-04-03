#include<stdio.h>
#include<string.h>

int main()
{
    char dest[] = {97, 97, 0};
    char src[] = "aaa";
    int i;
    if((i = memcmp(dest, src, 2))==0)
        printf("Got it");
    else
        printf("Missed");
    return 0;
}


/*memcmp compares the first 2 bytes of the blocks dest and src as unsigned chars. So, the ASCII value of 97 is 'a'.

if((i = memcmp(dest, src, 2))==0) When comparing the array dest and src as unsigned chars, the first 2 bytes are same in both variables.so memcmp returns '0'.
Then, the if(0=0) condition is satisfied. Hence the output is "Got it".*/
