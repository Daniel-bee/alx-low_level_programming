#include "holberton.h"
/**
 * reverse_array - print assay in revers
 * @a: integer array
 * @n: integer
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
		if (i > 0)
			printf(", ");
	}
	printf("\n");
}
