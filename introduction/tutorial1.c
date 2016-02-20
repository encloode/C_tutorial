#include <stdio.h>
int
main (void)
{
    int number1, number2;
    printf("Enter the first number:");
    scanf("%d",&number1);
    printf("Enter the second number:");
    scanf("%d",&number2);

    if
        (number1>number2)
    {
        printf(" The number %d is greater than the number %d ",number1,number2);
    }
    else if
        (number1==number2)
    {
        printf(" Number 1 %d is equal to number 2 %d",number1,number2);
    }
    else
{
    printf(" Number 2 is greater than number 1");

}
//assignment..write a program like this comparing characters.

    return;
}
