#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - print assay in revers
 * @a: integer array
 * @n: integer
 */
void reverse_array(int *a, int n)
{
	int i, j = 0, tmp;

	for (i = n - 1; i != j; i--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j++;
	}
}
