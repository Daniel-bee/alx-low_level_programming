#include "holberton.h"
#include <stdlib.h>
/**
 * print_diagsums - diagonals of a square matrix of integers
 * @a: 2D array
 * @size: array size
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
