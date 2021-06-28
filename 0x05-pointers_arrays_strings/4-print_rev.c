#include "holberton.h"
/**
 * _strlen - string length
 * @s: characters pointer
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * print_rev - print string in revers order
 * @s: characters pointer
 */
void print_rev(char *s)
{
	int len = _strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}

