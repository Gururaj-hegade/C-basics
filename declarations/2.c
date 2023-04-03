#include<stdio.h>
int main()
{
    extern int i;
    i = 20;
    printf("%d\n", sizeof(i));

    extern int a;
    printf("%d\n", a);
    return 0;
}
int a=20;

/*in case of a, 20 is printed due to local variable dominance.*/
/*undifined i error*/
