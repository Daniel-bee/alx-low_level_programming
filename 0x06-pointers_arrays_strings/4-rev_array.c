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
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
		j++;
	}
}
