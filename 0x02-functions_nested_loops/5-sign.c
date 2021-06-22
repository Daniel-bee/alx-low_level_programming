#include "holberton.h"
/**
 *print_sign - prints the sign and a number
 * @n: accept char input
 *Return: 1 if lowercase else 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		putchar(45);
		return (-1);
	}

}
