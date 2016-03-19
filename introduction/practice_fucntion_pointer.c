#include<stdio.h>
/*student challenge
using pointers with a function to determine the greater of 2 numbers and to calculate their sum.*/
int f_sum(int a, int b, int *p_greatest);//declaration
int
main(void)
{
    int aa=10, bb=5, greatest, y;

    int *p_great;
    p_great=&greatest;
    y=f_sum(aa,bb,p_great);

    printf(" %d, %d", y, *p_great);

    return;
}

int f_sum(int a, int b, int *p_greatest)// this function determines the greater of 2 integers,calculates their sum
                                        // and utilizes pointers as out parameters.
{
    int total=(a+b);

    if (a>b)
    {
        *p_greatest=a;
    }
    else
    {
        *p_greatest=b;
    }
    return(total);
}
