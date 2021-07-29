#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - string length
 * @s: characters pointer
 * Return: string length
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
/**
 * _strncat - appends character string
 * @dest: character poiter point to char array
 * @src: character poiter point to char array
 * @n: most length
 * Return: return concatenate char string
 */
char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int len = _strlen(dest);

	while (src[c] != src[n])
	{
		dest[len] = src[c];
		c++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
