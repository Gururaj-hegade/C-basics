#include<stdio.h>

int main()
{
    int a[3][4] = {1, 2, 3, 4, 4, 3, 2, 1, 7, 8, 9, 0};
    printf("%u, %u\n", a+1, &a+1);
    return 0;
}

/*Step 1: int a[3][4] = {1, 2, 3, 4, 4, 3, 2, 1, 7, 8, 9, 0}; The array a[3][4] is declared as an integer array having the 3 rows and 4 colums dimensions.

Step 2: printf("%u, %u\n", a+1, &a+1);

The base address(also the address of the first element) of array is 65472.

For a two-dimensional array like a reference to array has type "pointer to array of 4 ints". Therefore, a+1 is pointing to the memory location of first element of the second row in array a. Hence 65472 + (4 ints * 2 bytes) = 65480

Then, &a has type "pointer to array of 3 arrays of 4 ints", totally 12 ints. Therefore, &a+1 denotes "12 ints * 2 bytes * 1 = 24 bytes".

Hence, begining address 65472 + 24 = 65496. So, &a+1 = 65496

Hence the output of the program is 65480, 65496*/
