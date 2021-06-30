#include "holberton.h"
#include <stdlib.h>
/**
 * _strcmp - ccompaire two string
 * @s1: first string
 * @s2: second string
 * Return: return the diff
 */
int _strcmp(char *s1, char *s2)
{
	int s1_sum = 0, s2_sum = 0, i;

	for (i = 0; s1[i] != '\0'; i++)
		s1_sum += s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		s2_sum += s2[i];
	if (s1_sum == s2_sum)
		return (0);
	else if (s1_sum > s2_sum)
		return (s1_sum - s2_sum);
	else
		return (s1_sum - s2_sum);
}
