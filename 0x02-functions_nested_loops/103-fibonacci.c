#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Find and print the largest prime factor of the number
 * 612852475143
 * Return: 0
 */
int main(void)
{
	unsigned long int x1 = 0, total = 0;
	unsigned long int x2 = 1;
	int i;
	unsigned long  int sum = 0;

	for (i = 2; i < 4000000; i++)
	{
		sum = x1 + x2;
		x1 = x2;
		x2 = sum;
		if (sum % 2 == 0)
		{
			total += sum;
		}

	}
	printf("%ld\n", total);
	return (0);
}
