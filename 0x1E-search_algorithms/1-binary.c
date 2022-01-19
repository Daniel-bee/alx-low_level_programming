#include "search_algos.h"
/**
 *binary_search - searches for a value in a sorted array
 *of integers using the Binary search algorithm
 *@array: pointer to the first element of the array to search in
 *@size: size of an array
 *@value: the value to search for
 *Return: (-1) if not exist or empty array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, mid = 0, end = size - 1, i = 0;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		i = start;
		mid = (end + start) / 2;

		printf("Searching in array: ");
		while (i < end)
		{
			printf("%d, ", array[i]);
			i++;
		}
		printf("%d \n", array[i]);

		if (value > array[mid])
		{
			start = mid + 1;
		}
		else if (value < array[mid])
		{
			end = mid - 1;
		}
		else
		{
			return (mid);
		}

	}
	return (-1);
}
