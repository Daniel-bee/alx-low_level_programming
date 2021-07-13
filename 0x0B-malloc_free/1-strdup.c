#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: constant char
* Return: char pointer
*/
char *_strdup(char *str)
{
	char *ptr = (char *)malloc(strlen(str) * sizeof(str));
	int i;

	if (ptr == NULL || str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
