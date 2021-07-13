#include <stdio.h>
#include <stdlib.h>
/**
* len - returns length
* @str: constant char
* Return: string length
*/
int len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: constant char
* Return: char pointer
*/
char *_strdup(char *str)
{
	char *ptr;
	int sl = len(str), i;

	if (!str)
		return (NULL);
	ptr = (char *)malloc(sl * sizeof(*str) + 1);
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}

	ptr[i] = '\0';
	return (ptr);
}
