#include "holberton.h"
/**
  *_strcpy - copy string characters
  * @dest: new copy
  * @src: string to be copied
  * Return: character string
  */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
