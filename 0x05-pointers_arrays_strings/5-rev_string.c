#include "holberton.h"
/**
 * _strlen - string length
 * @c: characters pointer
 * Return: string length
 */
int _strlen(char *c)
{
	int length = 0;

	while (c[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
 * rev_string - print string in revers order
 * @s: characters pointer
 */
void rev_string(char *s)
{
	int len = _strlen(s) - 1;
	int c = 0;

	while (len >= 0 && c <= len)
	{
		s[c] = s[len];
		len--;
		c++;
	}
	_putchar('\n');
}

