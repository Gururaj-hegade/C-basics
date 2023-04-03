//how many times for loop executed
#include<stdio.h>
int main()
{
    int i=5;
    for(;scanf("%s", &i); printf("%d\n", i));
    return 0;
}
/*infinite times. scanf return true(1) and the process continues.
