#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* string_nconcat - concatenates two strings
* @s1: char
* @s2: char
* @n: int
* Return: concat str
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = 0, len1 = 0, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;
	for (index = 0; s2[index]; index++)
		len1++;
	if (n >= len1)
		concat = malloc(sizeof(char) * (len + len1 + 1));
	else
		concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0; s2[index] && index < (len + len1); index++)
		concat[len++] = s2[index];

	concat[len] = '\0';

	return (concat);
}
