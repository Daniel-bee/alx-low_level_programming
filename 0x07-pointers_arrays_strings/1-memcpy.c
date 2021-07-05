#include "holberton.h"
/**
* _memcpy - copies memory area
* @dest: pointer string
* @src: character
* @n: integer
* Return: return char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++, src++)
		*(dest + i) = *src;
	return (dest);
}
