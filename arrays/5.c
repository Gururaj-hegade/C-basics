#include<stdio.h>

int main()
{
    float arr[] = {12.4, 2.3, 4.5, 6.7};
    printf("%d\n", sizeof(arr)/sizeof(arr[0]));
    return 0;
}

/*The sizeof function return the given variable. Example: float a=10; sizeof(a) is 4 bytes

Step 1: float arr[] = {12.4, 2.3, 4.5, 6.7}; The variable arr is declared as an floating point array and it is initialized with the values.

Step 2: printf("%d\n", sizeof(arr)/sizeof(arr[0]));

The variable arr has 4 elements. The size of the float variable is 4 bytes.

Hence 4 elements x 4 bytes = 16 bytes

sizeof(arr[0]) is 4 bytes

Hence 16/4 is 4 bytes

Hence the output of the program is '4'.*/
