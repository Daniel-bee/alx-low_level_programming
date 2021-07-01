#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - print assay in revers
 * @a: integer array
 * @n: integer
 */
void reverse_array(int *a, int n)
{
	int i = n - 1, j, tmp;

	for (j = 0; i != j; j++)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
		i--;
	}
}
