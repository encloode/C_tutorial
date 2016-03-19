//write a program that uses a pointer variable to assign the value 50 to a variable.
#include<stdio.h>
int
main (void)
{

int sum, *p_sum;

p_sum=&sum;

*p_sum=50;

printf("sum is %d:",sum);

return (0);

}
