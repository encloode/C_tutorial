#include<stdio.h>
int
main(void)
{
char class;
printf (" Enter ship serial number.");
scanf("%c",&class);

switch (class)
{
case 'B':
    case 'b':
    printf ("Battleship.\n");
    break;

    case 'C':
    case 'c':
        printf("Cruiser.\n");
        break;

    case 'D':
    case 'd':
        printf ("Destroyer.\n");
        break;

    case 'F':
    case 'f':
        printf("Frigate.\n");
        break;

    default:
        printf ("unknown.\n");

}
    return;
}
