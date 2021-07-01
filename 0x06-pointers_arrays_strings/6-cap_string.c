#include "holberton.h"
/**
 * cap_string - capitalize the string
 * @c: character string
 * Return: char string
 */
char *cap_string(char *c)
{
	int i, j = 0;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (i == 0 && (c[i] >= 97 && c[i] <= 122))
			c[i] = c[j] - 32;
		if (c[i] == '\t')
			c[i] = ' ';
		if (c[i] == '\t' && (c[i + 1] >= 97 && c[i + 1] <= 122))
			c[i + 1] = c[i + 1] - 32;
		if (c[i] == ' ' && (c[i + 1] >= 97 && c[i + 1] <= 122))
			c[i + 1] = c[i + 1] - 32;
		if (c[i] == '.' && (c[i + 1] >= 97 && c[i + 1] <= 122))
			c[i + 1] = c[i + 1] - 32;
		if (c[i] == '\n' && (c[i + 1] >= 97 && c[i + 1] <= 122))
			c[i + 1] = c[i + 1] - 32;
		if (c[i] == ',' && (c[i + 1] >= 97 && c[i + 1] <= 122))
			c[i + 1] = c[i + 1] - 32;
		if (c[i] == ';' && (c[i + 1] >= 97 && c[i + 1] <= 122))
			c[i + 1] = c[i + 1] - 32;
		if (c[i] == '(' && (c[i + 1] >= 97 && c[i + 1] <= 122))
			c[i + 1] = c[i + 1] - 32;
		if (c[i] == ')' && (c[i + 1] >= 97 && c[i + 1] <= 122))
			c[i + 1] = c[i + 1] - 32;
		if (c[i] == '{' && (c[i + 1] >= 97 && c[i + 1] <= 122))
			c[i + 1] = c[i + 1] - 32;
		if (c[i] == '}' && (c[i + 1] >= 97 && c[i + 1] <= 122))
			c[i + 1] = c[i + 1] - 32;
		if (c[i] == '!' && (c[i + 1] >= 97 && c[i + 1] <= 122))
			c[i + 1] = c[i + 1] - 32;
		if (c[i] == '"' && (c[i + 1] >= 97 && c[i + 1] <= 122))
			c[i + 1] = c[i + 1] - 32;
		if (c[i] == '?' && (c[i + 1] >= 97 && c[i + 1] <= 122))
			c[i + 1] = c[i + 1] - 32;
	}
	return (c);
}
