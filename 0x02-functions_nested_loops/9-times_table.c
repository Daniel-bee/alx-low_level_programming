#include "holberton.h"
/**
 *times_table- compute time table
 */
void times_table(void)
{
	int i, j, pro;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			pro = i * j;
			if (pro <= 9)
			{
				_putchar(pro + '0');
				_putchar(' ');
			}
			else if (pro > 9)
			{
				_putchar(pro / 10 + '0');
				_putchar(pro % 10 + '0');
			}
			_putchar(44);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
