#include <stdio.h>
/**
 * main - start here
 * Return: zero
*/
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a <= 57; a++)
	{

	for (b = 48; b < 57; b++)
	{
	for (c = 48; c <= 57; c++)
	{
	for (d = 48; d <= 57; d++)
	{
	putchar(a);
	putchar(b);
	putchar(' ');
	putchar(c);
	putchar(d);
	putchar(44);
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
