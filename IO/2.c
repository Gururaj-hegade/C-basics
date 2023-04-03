#include<stdio.h>
#include<math.h>

int main()
{
    float i = 2.5;
    printf("%f, %d", floor(i), ceil(i));
    return 0;
}

/*Both ceil() and floor() return the integer found as a double.

floor(2.5) returns the largest integral value(round down) that is not greater than 2.5. So output is 2.000000.

ceil(2.5) returns 3, while converting the double to int it returns '0'.
So, the output is '2.000000, 0'.*/
