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
	int len = _strlen(s) - 1, i = 0;
	char t;

	while (i <= len)
	{
		t = s[i];
		s[i] = s[len];
		s[len--] = t;
		i++;
	}
	_putchar('\n');
}

