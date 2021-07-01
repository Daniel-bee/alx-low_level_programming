#include "holberton.h"
/**
 * cap_string - capitalize the string
 * @c: character string
 * Return: char string
 */
char *cap_string(char *c)
{
	int i, j = 0;

	for (i = 0; c[i] != '\0'; i++, j++)
	{
		if (i == 0 && (c[i] >= 65 && c[i] <= 90))
			c[j] = c[i];
		if (c[i] == '\t' || c[i] == '\\')
			c[j] = ' ';
		if (c[i] == ' ' && (c[i + 1] >= 97 && c[i + 1] <= 122))
			c[i + 1] = c[i + 1] - 32;
		if (c[i] == '.' && (c[i + 1] >= 97 && c[i + 1] <= 122))
			c[i + 1] = c[i + 1] - 32;
		if (c[i] == '\n' && (c[i + 1] >= 97 && c[i + 1] <= 122))
			c[i + 1] = c[i + 1] - 32;
	}
	return (c);
}
