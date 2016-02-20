#include<stdio.h>
/*Write a program that tells the user what action to take based on the
color of traffic light.*/
int main(void)
{
    printf("This program tells the user what actions to take based on the \n");
    printf("color of a traffic light\n");
    printf("\tR or r stand for Red\n");
    printf("\tY or y stand for yellow\n");
    printf("\tG or g stand for green\n");

char color;
    printf("Please enter the color of the traffic light\n");
    scanf("%c",&color);
    if (color=='R'||color=='r')
        {printf("stop");}
        else
            if (color=='Y'||color=='y')
            {printf("Slow down");}
        else
        if (color=='G'||color=='g')
            {printf("Go!");}
        else
            printf("Invalid entry!");
}
/*this same program can written using a switch statement.
switch is similar to if statement. However, it is easier to read*/
