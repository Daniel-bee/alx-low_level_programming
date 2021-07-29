#include <stdio.h>
#include <stdlib.h>
/**
* create_array - creates an array of chars
* @size: size of an array
* @c: constant char
* Return: char pointer
*/
char *create_array(unsigned int size, char c)
{
	char *arr = (char *)malloc(size * sizeof(c));
	unsigned int i;

	if (size == 0 || arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
