#include "holberton.h"
/**
* _strchr - locates a character in a string
* @s: pointer string
* @c: character
* Return: return char
*/
char *_strchr(char *s, char c)
{
	char *tmp = (char *) s;

	if (*s == 0)
		return (0);
	while (*tmp)
	{
		if (*tmp == c)
			return (tmp);
		tmp++;
	}
	return (0);
}
