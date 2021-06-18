#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - start here
 * Return: return 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d", n);
	n = n % 10;
	printf(" is %d", n);
	if (n > 5)
	{
	printf(" and is greater than 5\n");
	}
	else if (n == 0)
	{
	printf(" and is 0\n");
	}
	else if (n != 0 && n < 6)
	{
	printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
