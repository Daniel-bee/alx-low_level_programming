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
	if (str == NULL)
		return (NULL);
	int s = len(str) + 1;
	char *ptr = (char *)malloc(s * sizeof(*str));
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
