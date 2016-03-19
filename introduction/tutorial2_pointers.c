#include<stdio.h>
/*Tutorial on pointer syntax, uses, indirect referencing of variables.*/
int main(void)
{
    int m=9,n=1;
    int sum;
    int *pointer_m,*pointer_n;
    pointer_m=&m;
    pointer_n=&n;
    //printf("%d\n",&m);
   // printf("%d\n",*pointer_m);
    sum=*pointer_m+*pointer_n;
    printf("sum = %d\n",sum);

    int*p_sum;
    //lets change the value of sum through the a pointer.
    p_sum=&sum; // now th pointer has the address of sum
    *p_sum=50; //now the value of sum has been changed indirectly through the pointer.
    printf("sum is now =%d\n",sum);

    //alternatively
    sum=20;
    printf("sum is now=%d\n",*p_sum); //accessing the value of sum though its pointer

    //pointers provide a lot of flexibility when used with functions. they allow for more than one output from a function.
    //in addition pointers are very important when reading and writing to files in C.
    //check tutorial 3 on file pointers.

    return;
}
