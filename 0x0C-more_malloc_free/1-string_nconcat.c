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
	char *concat_str;
	unsigned int index, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat_str = malloc(sizeof(char) * (len + 1));

	if (concat_str == NULL)
		return (NULL);
	len = 0;
	for (index = 0; s1[index]; index++)
		concat_str[len++] = s1[index];

	for (index = 0; s2[index] && index < n ; index++)
		concat_str[len++] = s2[index];
	concat_str[len] = '\0';
	return (concat_str);
}
