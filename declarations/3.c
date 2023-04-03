#include<stdio.h>
int main()
{
    struct emp
    {
        char name[20];
        int age;
        float sal;
    };
    struct emp e = {"Tiger"};
    printf("%d, %f\n", e.age, e.sal);
    return 0;
}


/*output is 0,0.0*/
/*When an automatic structure is partially initialized remaining elements are initialized to 0(zero).*/
