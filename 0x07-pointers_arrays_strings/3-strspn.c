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
* _strspn - gets the length of a prefix substring
* @s: pointer string
* @accept: string character
* Return: return int
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((s == NULL) || (accept == NULL))
		return (len);
	while (*s && _strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
