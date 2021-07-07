#include "holberton.h"
/**
 * _pow_recursion - put strings.
 * @s: base
 * *y: exponent
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
