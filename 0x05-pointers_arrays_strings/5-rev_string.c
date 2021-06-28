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
	char *l = &s[0];
	char *r = &s[len];

	while (l < r)
	{
		s = *l;
		*l = *r;
		*r = s;
		l++;
		r--;
	}
	_putchar('\n');
}

