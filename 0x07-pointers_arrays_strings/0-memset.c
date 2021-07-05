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
	unsigned char *p = (unsigned char*)s;

	while (n--)
		*p++ = (unsigned char)b;
	return (s);
}
