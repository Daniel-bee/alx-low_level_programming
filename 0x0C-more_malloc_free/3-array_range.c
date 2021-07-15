#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_range - concatenates two strings
* @min: int
* @max: int
* Return: range
*/
int *array_range(int min, int max)
{
	int *ptr, i;

	if (max < min)
		return (NULL);
	ptr = (int *)malloc(sizeof(int) * (max - min) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		ptr[i] = i;
	return (ptr);
}
