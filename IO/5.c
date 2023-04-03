#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *i = "55.555";
    int result1 = 10;
    float result2 = 11.111;
    result1 = result1+atoi(i);
    result2 = result2+atof(i);
    printf("%d, %f", result1, result2);
    return 0;
}

/*Function atoi() converts the string to integer.
Function atof() converts the string to float.

result1 = result1+atoi(i);
Here result1 = 10 + atoi(55.555);
result1 = 10 + 55;
result1 = 65;

result2 = result2+atof(i);
Here result2 = 11.111 + atof(55.555);
result2 = 11.111 + 55.555000;
result2 = 66.666000;
So the output is "65, 66.666000" .*/
