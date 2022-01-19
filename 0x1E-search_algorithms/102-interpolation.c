#include "search_algos.h"
/**
 *interpolation_search - searches for a value in a sorted array
 *of integers using the Interpolation search algorithm
 *@array: list of element
 *@size: size of an array
 *@value: value search for
 *Return: (-1) if array element Null or not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (!array)
		return (-1);
	while (low <= high)
	{
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));

		if (pos > size)
			return (-1);
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
			return (pos);
		low++;
	}

	return (-1);
}
