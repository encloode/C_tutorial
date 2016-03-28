#include <stdio.h>


int
multiply (int m, int n)
{
	int answer;
	if (n == 1)
		answer = m;
	else
		answer = m + multiply (m, n-1);

	return (answer);
}


int
main (void)
{

	int a, b, c;
	a = 20;
	b = 10;
	c = multiply (a, b);
	printf("%d times %d is %d. \n", a, b, c);

	return(0);
}
