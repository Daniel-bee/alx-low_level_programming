#include "holberton.h"
/**
 * print_line - prints straight line
 * @n: an intiger number
*/
void print_line(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
