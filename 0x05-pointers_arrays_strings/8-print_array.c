#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print array value
 * @a: characters pointer
 * @n: array length
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);
		if (count < n - 1)
			printf(", ");
		count++;
	}
	printf("\n");
}
