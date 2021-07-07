#include "holberton.h"
/**
 * _puts_recursion - put strings.
 * @s: character string
 */
void _puts_recursion(char *s)
{
    if (*s)
    {
        _putchar(*s);
        _puts_recursion(s + 1);
    }
    else
    {
        _putchar('\n')
    }
}
