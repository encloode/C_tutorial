/*Assignment.

1.write a function that takes the the value of 3 resistors and calculates the value for a
series configuration and for a parallel configuration.The function should use pointers to return the 2 values.

2.write a function that calculates the area of a cylinder, the perimeter and the volume. pi=3.14.

3.Write a program for an automatic teller machine that dispenses money.The user should enter the amount desired
(a multiple of 10 dollars) and the machine dispenses this amount using the least number of bills. The bills dispensed
are 50s, 20s, and 10s. Write a function that determines how many of each kind of bill to dispense.
(Project 1. chapter 6 of Problem solving and program design in C Jeri R.Hanly-Eliot B.Koffman 7th Edition.)
4.
    a. determine what the output of the code below without running it.
    b. try running it and comparing your answer.
The solution to question 4 will be provided upon request. Remember to do some research first.*/

#include<stdio.h>

void separate(double num, char *p_sign,double *p_whole,double *p_fract);//function declaration...take note of parameters


int main(void)
{
   double number=-40.78;
   double fraction;
   char sign;
   double whole;
separate(number,&sign,&whole,&fraction); //call to function. take not of arguments
//printf("number is %f\nsign is %c\nwhole part is %f\nfraction is %f\n",number,sign,whole,fraction);
return(0);
}

//function definition
void separate(double num, char *p_sign,double *p_whole,double *p_fract)
{
    double magnitude;
    *p_sign = '+';
    if (num<0)
        *p_sign= '-';
        magnitude=fabs(num); //research on what the function FABS() does!! google is your friend :)
        *p_whole=floor (magnitude); // research on what the fucntion FLOOR() does. google is your friend
        *p_fract=magnitude-*p_whole;
}
