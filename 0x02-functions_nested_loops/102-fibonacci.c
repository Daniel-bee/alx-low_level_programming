#include <stdio.h>
/**
*main - Fibonacci numbers
*Return: zero
*/
int main(void)
{
	unsigned long long int x1 = 0;
	unsigned long long int x2 = 1;
	int i;
	unsigned long long int sum = 0;

	for (i = 2; i < 59; i++)
	{
		sum = x1 + x2;
		x1 = x2;
		x2 = sum;
		printf("%llu ", sum);
		if (i  < 58)
			printf(", ");
	}
	printf("\n");
	return (0);
}
