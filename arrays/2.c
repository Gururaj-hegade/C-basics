#include<stdio.h>

int main()
{
    int arr[5], i=0;
    while(i<5)
        arr[i]=++i;

    for(i=0; i<5; i++)
        printf("%d, ", arr[i]);

    return 0;
}

/*Since C is a compiler dependent language, it may give different outputs at different platforms. We have given the TurboC Compiler (Windows) output.

Please try the above programs in Windows (Turbo-C Compiler) and Linux (GCC Compiler), you will understand the difference better.*/
