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
	int ch;

		while (*s)
		{
			ch = *s++;
			if (ch == c)
			{
				return (s - 1);
			}
			if (ch == 0)
			{
				return (NULL);
			}
		}
	return (NULL);
}
/**
* _strpbrk - searches a string for any of a set of bytes
* @s: pointer string
* @accept: character
* Return: return char
*/
char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return (NULL);
	while (*s)
	{

		if (_strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
