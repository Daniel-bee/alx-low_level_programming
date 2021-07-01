#include "holberton.h"
/**
 * print_number - print integer
 *@n: integer
 */
void print_number(int n)
{
	unsigned int num;

	if (n == 0)
		_putchar('0');
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	while (num != 0)
	{
		num = num / 10;
		_putchar(num % 10 + '0');
	}
}
