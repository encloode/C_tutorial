#include <stdio.h>
/*suppose you want to associate the noise loudness measured in decibels
with the effect of the nose. the following table shows the relationship
between noise levels and human perceptions of noises.

Loudness leve in DB     Perception
50 or lower             quiet
51-70                   intrusive
71-90                   annoying
91-110                  very annoying
above 110               uncomfortable
Source Problem solving and program design in C J R.Hanly-E B.koffman7TH ed*/
int
main (void)
{
    /*Hint ask user for noise level and store it in appropriate variable.
    design an if statement to evaluate the conditions.
    Remember the computer executes code line by line from top down.
    */
    int decibels_rate;

    printf(" enter the rate of decibels.");
    scanf ("%d",&decibels_rate);

    if
        (decibels_rate<=50)
    {
        printf ("Quiet.");

    }

    else if
     (decibels_rate<=70)
    {
        printf("Intrusive");
    }

    else if
        (decibels_rate<=90)
    {
        printf (" Annoying.");
    }

    else if
        (decibels_rate<=110)
    {
        printf ("Very Annoying.");
    }

    else
    {
        printf("Uncomfortable.");
    }

    return;

}
