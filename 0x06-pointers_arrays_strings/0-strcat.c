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
 * _strcat - appends character string
 * @dest: character poiter point to char array
 * @src: character poiter point to char array
 * Return: return concatenate char string
 */
char *_strcat(char *dest, char *src)
{
	int c = 0;
	int len = _strlen(dest);
	int c2 = len;

	while (src[c] != '\0')
	{
		dest[c2] = src[c];
		c++;
		c2++;
	}
	dest[c2] = '\0';
	return (dest);
}
