#include "holberton.h"
#include <stddef.h>
/**
* _strchr - locates a character in a string
* @s: pointer string
* @c: character
* Return: return char
*/
char *_strchr(char *s, char c)
{
	char *tmp = NULL;

	if (s != NULL)
	{
	while (*s)
	{
		if (*s == (char) c)
		{
			tmp = s;
		}
		s++;
	}
	}
	return (tmp);
}
