/*3.Write a program for an automatic teller machine that dispenses money.The user should enter the amount desired
(a multiple of 10 dollars) and the machine dispenses this amount using the least number of bills. The bills dispensed
are 50s, 20s, and 10s. Write a function that determines how many of each kind of bill to dispense.
(Project 1. chapter 6 of Problem solving and program design in C Jeri R.Hanly-Eliot B.Koffman 7th Edition.)*/

#include<stdio.h>
void change(int amount,int *fifty,int *twenty,int *ten)
{
    //first the variables containing the number of each bill is initialized to 0 through pointers
    *fifty=0;
    *twenty=0;
    *ten=0;
    //remember, the computer executes the program line by line.
        while(amount-50>=0)//first check if the amount is at least 50.
        {
            //if it is at least 50. then increment the number of 50 bills by 1
            *fifty=*fifty+1;
            amount=amount-50;// don't forget to reduce the amount by 50 now.
            //if the amount is still greater than 50, the computer executes this loop again.
        }

        //at this point, the amount is definitely less than 50...
        while(amount-20>=0)//first check if the amount is at least 20
        {
            //if it is at least 20. then increment the number of 20 bills by 1
            *twenty=*twenty+1;
            amount=amount-20;// don't forget to reduce the amount by 20 now.
            //if the amount is still greater than 20, the computer executes this loop again.
        }

        //at this point the amount is definitely less than 20....
        while(amount-10>=0)// same applies for this loop
        {
            *ten=*ten+1;
            amount=amount-10;
        }
    //as expected, the function does not return any value.....the function output parameter is void, pointers were used to store values.
}


int main(void)
{
    int balance;
    int number_of_50,number_of_20,number_of_10;

    printf("This program determines the least number of bills an \n automatic teller machine should dispense.\n");
    do //remember how this loop works?....it executes once before checking the condition.
    {
        printf("Please enter the desired amount (a multiple of 10 dollars)\n");
        scanf("%d",&balance);
    }
    while(balance%10!=0);//this is the condition for the loop

    change(balance,&number_of_50,&number_of_20,&number_of_10);// call to function..pay attention to the arguments passed.

    printf("Pay\n%d fifty(s),\n%d twenty(s),\n%d ten(s).",number_of_50,number_of_20,number_of_10);
    return;
}
