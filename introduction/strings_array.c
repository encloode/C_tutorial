#include <stdio.h>
#include <string.h>

int
main (void)
{

	char city1[50], city2[50];
	int comp;

	printf ("Comparison of two city names\n");
	printf ("============================\n\n");

	printf ("Enter the name of the first city (<50 letters): ");
    fgets (city1, 50, stdin);
    int x=strlen(city1);
    printf("%d\n",x);
    city1[x-1] = '\0';
	printf ("Enter the name of the second city (<50 letters): ");
	scanf("%s",city2);
/* 	fgets (city2, 50, stdin);
 * 	city2[strlen(city2)-1] = '\0';
 */

	/* strcmp compares two strings */
	comp = strcmp (city1, city2);
	int len1=strlen(city1);
	int len2=strlen(city2);

	if (len1>len2)
    {
        printf("%s City 1 is > than City 2 %s\n",city1,city2);
    }
else
if (len1 == len2)
{
    printf("%s City 1 is equal to %s city 2\n",city1,city2);
}

else
{
    printf("%s City 2 is > than %s City 1\n\n", city2,city1);
}
	if (comp < 0)
		printf ("\n\n%s < %s.\n", city1, city2);
	else
		if (comp == 0)
			printf ("\n%s = %s.", city1, city2);
		else
			printf ("\n%s > %s.", city1, city2);
printf ("%d", sizeof(city1));

	return (0);
}
