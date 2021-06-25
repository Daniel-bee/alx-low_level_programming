#include <stdio.h>

/**
 * main - largetst prime number
 * Return: Zero
 */
int main(void)
{
	int i = 2;
	long n = 612852475143;


	while (i < n)
	{
		while (n % i == 0)
		{
			if (n == i)
			{
				break;
			}
			n /= i;
		}
		i++;


	}

	printf("%lu\n", n);
	return (0);
}






















			}




