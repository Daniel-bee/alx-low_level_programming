#include "holberton.h"
/**
 * print_line - prints straight line
 * @n: an intiger number
*/
void print_line(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
}
