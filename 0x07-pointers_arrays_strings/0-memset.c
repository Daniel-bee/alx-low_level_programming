#include "holberton.h"
/**
* _memset - fills memory with a constant byte
* @s: pointer string
* @b: character
* @n: integer
* Return: return char
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++, s++)
		*s = b;
	return (s);
}
