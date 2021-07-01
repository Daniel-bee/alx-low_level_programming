#include "holberton.h"
/**
  *leet - convert to integer
  *@c: character string
  *Return: char
  */
char *leet(char *c)
{
	int i, j = 0;

	for (i = 0; c[i] != '\0'; i++, j++)
	{
		if (c[i] == 65 || c[i] == 97)
			c[j] = '4';
		if (c[i] == 69 || c[i] == 101)
			c[j] = '3';
		if (c[i] == 79 || c[i] == 111)
			c[j] = '0';
		if (c[i] == 84 || c[i] == 116)
			c[j] = '7';
		if (c[i] == 76 || c[i] == 108)
			c[j] = '1';
	}
	return (c);
}
