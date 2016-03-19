#include <stdio.h>
/* student challenge.
use a function and a pointer to return the letter grade of a student.*/
void letter_grade ( int points, char *gradep); //declaration.
int main (void)
{
    int mark=70;
    char p;
    char *grade=&p;
    letter_grade (mark, grade);
    printf("%c", p);
    return(0);
}
void letter_grade ( int points, char *gradep)
{
    if (points<=100 && points >= 90)
    {
        *gradep='A';
    }
    else if (points <=89 && points >=80)
    {
        *gradep='B';
    }

    else
    {
        *gradep='C';
    }
    return(0);
}



