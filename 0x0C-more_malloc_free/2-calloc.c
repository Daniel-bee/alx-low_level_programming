#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - allocates memory
* @nmemb: int
* @size: int
* Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
}
