#include<stdio.h>

int main()
{
    int a[5] = {5, 1, 15, 20, 25};
    int i, j, m;
    i = ++a[1];
    j = a[1]++;
    m = a[i++];
    printf("%d, %d, %d", i, j, m);
    return 0;
}

/*Step 1: int a[5] = {5, 1, 15, 20, 25}; The variable arr is declared as an integer array with a size of 5 and it is initialized to

a[0] = 5, a[1] = 1, a[2] = 15, a[3] = 20, a[4] = 25 .

Step 2: int i, j, m; The variable i,j,m are declared as an integer type.

Step 3: i = ++a[1]; becomes i = ++1; Hence i = 2 and a[1] = 2

Step 4: j = a[1]++; becomes j = 2++; Hence j = 2 and a[1] = 3.

Step 5: m = a[i++]; becomes m = a[2]; Hence m = 15 and i is incremented by 1(i++ means 2++ so i=3)

Step 6: printf("%d, %d, %d", i, j, m); It prints the value of the variables i, j, m

Hence the output of the program is 3, 2, 15*/
