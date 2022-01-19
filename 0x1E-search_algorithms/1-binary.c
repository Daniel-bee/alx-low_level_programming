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
	size_t start = 0, mid, end = size - 1;

	if (array == NULL)
		return (-1);
	while (start < end)
	{
		mid = (end + start) / 2;
		printf("Searching in array: ");
		while (start < end)
		{
			printf("%d, ", array[start]);
			start++;
		}
		printf("%d \n", array[start]);

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
