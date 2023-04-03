#include<stdio.h>
int main()
{
    enum status { pass, fail, atkt};
    enum status stud1, stud2, stud3;
    stud1 = pass;
    stud2 = atkt;
    stud3 = fail;
    printf("%d, %d, %d\n", stud1, stud2, stud3);
    return 0;
}

/*enum takes the format like {0,1,2..) so pass=0, fail=1, atkt=2

stud1 = pass (value is 0)

stud2 = atkt (value is 2)

stud3 = fail (value is 1)

Hence it prints 0, 2, 1*/
