#include "holberton.h"
/**
 * _strlen - string length
 * @s: characters pointer
 * Return: string length
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
