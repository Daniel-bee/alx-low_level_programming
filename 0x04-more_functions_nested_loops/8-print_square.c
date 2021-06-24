#include "holberton.h"
/**
 * print_square - prints square
 * @n: an intiger number
*/
void print_square(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
