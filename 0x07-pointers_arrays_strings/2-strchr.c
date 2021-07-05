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
	char *tmp = (char *) s;

	if ((char *)s == NULL)
		return (NULL);
	while (*tmp)
	{
		if (*tmp == c)
			return (tmp);
		tmp++;
	}
	return (NULL);
}
