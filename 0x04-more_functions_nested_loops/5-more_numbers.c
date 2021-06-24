#include "holberton.h"
/**
 * more_numbers - prints 0 - 14 ten times
*/
void more_numbers(void)
{
	char i, j, l, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				l = j;
			}
			else
			{
				l = j % 10;
				k = j / 10;
				_putchar(k + '0');
			}
			_putchar(l + '0');
		}
		_putchar('\n');
	}
}
