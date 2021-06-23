#include <stdio.h>
/**
* main- Fibonacci numbers
* Return: zero
*/
int main(void)
{
	int x1 = 0;
	int x2 = 1;
	int i;
	int sum = 0;

	for (i = 2; i <= 50; i++)
	{
		sum = x1 + x2;
		x1 = x2;
		x2 = sum;
	}
	printf("%d\n", sum);
	return (0);
}
