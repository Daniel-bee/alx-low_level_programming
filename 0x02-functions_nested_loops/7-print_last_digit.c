#include "holberton.h"
/**
 *_abs - compute absolute value of a number
 * @n: accept an integer
 *Return: the absolute value of a number
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n * -1);
	}
}
/**
 *print_last_digit - compute the last digit of the number
 * @n: accept an integer
 *Return: returns the last gigit of a number
 */
int print_last_digit(int n)
{
	int last;

	last = _abs(n % 10);
	_putchar(last + '0');
	return (last);
}
