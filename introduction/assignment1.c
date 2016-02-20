#include <stdio.h>
int
main(void)
{
    char letter1, letter2;
    printf("Please enter to letters\n");
    scanf("%c%c",&letter1,&letter2);
    if(letter1<letter2)
    {
       printf("The ascii code for letter1 is greater than that of letter 2");
    }
    if(letter1==letter2)
    {
        printf("the ascii code for letter 1 and 2 are equal");
    }
    else
        printf("The ascii code for letter 2 is greater than that of letter 1");
    return 0;
}
