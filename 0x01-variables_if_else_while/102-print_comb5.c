#include <stdio.h>
/**
* main - start here
* Return: Returns zero when main dunction ends
*/
int main(void)
{
	int n, m;

	for (n = 0; n < 99; n++)
	{
		for (m = 1; m <= 99; m++)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			putchar(' ');
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');
			if (m == 99 && n == 98)
			{
				putchar('\n');
			}
			else
			{
				putchar(44);
				putchar(' ');
			}
		}
	}
	return (0);
}
