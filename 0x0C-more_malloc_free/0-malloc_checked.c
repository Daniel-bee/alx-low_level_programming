#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - function that allocates memory using malloc
* @b: length
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b * sizeof *ptr);

	if (!ptr)
		exit(98);
}
