#include <stdio.h>
/**
*main - Fibonacci numbers
*Return: zero
*/
int main(void)
{
	unsigned long int x1 = 0;
	unsigned long int x2 = 1;
	int i;
	unsigned long  int sum = 0;

	for (i = 2; i < 59; i++)
	{
		sum = x1 + x2;
		x1 = x2;
		x2 = sum;
		if (sum <= 20365011074)
		{
		printf("%lu", sum);
		if (i  <= 50)
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
