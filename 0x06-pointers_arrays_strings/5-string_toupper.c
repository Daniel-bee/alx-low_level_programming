#include "holberton.h"
/**
 * string_toupper - change string to uppercase
 * @c: character string
 * Return: upercase string
 */
char *string_toupper(char *c)
{

	int i, j = 0;

	for (i = 0; c[i] != '\0'; i++, j++)
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[j] = c[i] - 32;
		else
			c[j] = c[i];
	}
	return (c);
}
