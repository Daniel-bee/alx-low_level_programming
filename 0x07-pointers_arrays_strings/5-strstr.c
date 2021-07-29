#include "holberton.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: characters pointer
 * @needle: substring
 * Return: string characters
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *Begin = haystack;
		char *pattern = needle;
	while (*haystack && *pattern && *haystack == *pattern)
	{
		haystack++;
		pattern++;
	}

	if (!*pattern)
		return (Begin);

	haystack = Begin + 1;
	}
		return (NULL);
}
