#include "holberton.h"
/**
 * _strcmp - ccompaire two string
 * @s1: first string
 * @s2: second string
 * Return: return the diff
 */
int _strcmp(char *s1, char *s2)
{
	int i, sum = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			sum = s1[i] - s2[i];
		}
		if (s1[i] > s2[i])
		{
			sum = s1[i] - s2[i];
		}
	}
	return (sum);
}
