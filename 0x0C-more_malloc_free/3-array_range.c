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
int *m;
int i;

if (min > max)
	return (NULL);

m = malloc((max - min + 1) * sizeof(int));

if (m == 0)
	return (NULL);


for (i = 0; min + i <= max; i++)
	m[i] = min + i;

return (m);
}
