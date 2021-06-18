#include <stdio.h>
/**
 * main - start here
 * Return: zero
*/
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
	putchar(n);
	if (n < '9')
	{
	putchar(44);
	putchar(' ');
	}
	n++;
	}
	putchar('\n');
	return (0);
}
