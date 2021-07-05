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
	if (s == NULL)
	{
		return (NULL);
	}
	while (*s)
	{
		if (*s == (char) c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
