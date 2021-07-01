#include "holberton.h"
/**
  *leet - convert to integer
  *@c: character string
  *Return: char
  */
char *leet(char *c)
{
	int i, j;
	int a[] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 108};
	char b[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == a[j])
				c[i] = b[j];
		}
	}
	return (c);
}
