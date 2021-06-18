#include <stdio.h>
/**
 * main - start here
 * Return: zero
*/
int main(void)
{
	int ch = 97;
	int n = '0';

	while (n <= '9')
	{
	putchar(n);
	n++;
	}
	while (ch <= 102)
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
