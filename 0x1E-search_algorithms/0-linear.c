#include"search_algos.h"
/**
 *linear_search - searches for a value in an array of
 *integers using the Linear search algorithm
 *@array: array pointer to the first element of the array
 *@size: number of elements in array
 *@value: the value to search for
 *Return: -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	while (index < size)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}

