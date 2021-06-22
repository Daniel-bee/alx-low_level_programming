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
