#include "search_algos.h"
/**
 *jump_search -  searches for a value in a sorted array
 *of integers using the Jump search algorithm
 *@array: list of sorted array element
 *@size: size of an array
 *@value: value search for
 *Return: -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jamp = (int) sqrt(size);
	size_t low = 0, high = jamp;

	while (low <= size - 1)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (value >= array[low] && value <= array[high])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);
			while (low <= size - 1)
			{
				printf("Value checked array[%ld] = [%d]\n", low, array[low]);
				if (value == array[low])
					return (low);
				low++;
			}
		}
		if (low == size - 1)
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);
		high += jamp;
		low += jamp;
	}

	return (-1);
}
