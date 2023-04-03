#include<stdio.h>
int main()
{
    int x = 10, y = 20, z = 5, i;
    i = x < y < z;
    printf("%d\n", i);
    return 0;
}
/*Since x < y turns to be TRUE it is replaced by 1.
Then 1 < z is compared and to be TRUE. The 1 is assigned to i.*/
