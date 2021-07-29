#include <stdio.h>

/**
 * main - largetst prime number
 * Return: Zero
 */
int main(void)
{
	long int prime = 612852475143;
	int i = 3;

	while (i <= prime / 2)
	{
		if (prime % i == 0)
			prime = prime / i;
		else
			i += 2;
	}
	printf("%ld\n", prime);

	return (0);
}
