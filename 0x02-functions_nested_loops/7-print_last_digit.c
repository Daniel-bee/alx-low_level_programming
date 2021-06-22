#include "holberton.h"
/**
 *print_last_digit - compute the last digit of the number
 * @n: accept an integer
 *Return: returns the last gigit of a number
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = _putchar((n % 10) * -1 + '0');
	}
	else
	{
		n = _putchar((n % 10) + '0');
	}
	return (n);
}
