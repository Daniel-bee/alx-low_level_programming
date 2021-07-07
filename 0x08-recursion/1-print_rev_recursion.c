#include "holberton.h"
/**
 * void _print_rev_recursion - put strings.
 * @s: character string
 */
void void _print_rev_recursion(char *s)
{
	if (*s)
	{
		void _print_rev_recursion(s + 1);
		_putchar(*s);
	}
	
}
