#include<stdio.h>
void fun(int **p);

int main()
{
    int a[3][4] = {1, 2, 3, 4, 4, 3, 2, 8, 7, 8, 9, 0};
    int *ptr;
    ptr = &a[0][0];
    fun(&ptr);
    return 0;
}
void fun(int **p)
{
    printf("%d\n", **p);
}


/*Step 1: int a[3][4] = {1, 2, 3, 4, 4, 3, 2, 8, 7, 8, 9, 0}; The variable a is declared as an multidimensional integer array with size of 3 rows 4 columns.

Step 2: int *ptr; The *ptr is a integer pointer variable.

Step 3: ptr = &a[0][0]; Here we are assigning the base address of the array a to the pointer variable *ptr.

Step 4: fun(&ptr); Now, the &ptr contains the base address of array a.

Step 4: Inside the function fun(&ptr); The printf("%d\n", **p); prints the value '1'.

because the *p contains the base address or the first element memory address of the array a (ie. a[0])

**p contains the value of *p memory location (ie. a[0]=1).

Hence the output of the program is '1'*/
