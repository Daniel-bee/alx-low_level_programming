#include "search_algos.h"
/**
 *recursive_bsearch - helper function using recursion
 *
 * @array: ptr to array
 * @left: low index
 * @right: high index
 * @value: value search for
 *
 * Return: first index where value is, otherwise -1 if no value or array NULL
 */
int recursive_bsearch(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}
/**
 *  advanced_binary - searches for value in array ints with Binary search algo
 *
 * @array: ptr to array
 * @size: number of elements in array
 * @value: value at index
 *
 * Return: first index where value is, otherwise -1 if no value or array NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_bsearch(array, 0, size - 1, value));
}
