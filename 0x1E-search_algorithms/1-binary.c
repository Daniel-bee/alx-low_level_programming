#include "search_algos.h"
void print_array(int *, size_t, size_t);
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
	size_t start = 0, mid = 0, end = size - 1;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		mid = (end + start) / 2;
		print_array(array, start, end);
		if (value == array[mid])
			return (mid);
		if (value > array[mid])
			start = mid + 1;
		else
			end = mid - 1;

	}
	return (-1);
}
/**
 *print_array - print array element with comma
 *@array: array elements
 *@start: low index of an array
 *@end: last index of an array
 */
void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	while (start < end)
	{
		printf("%d, ", array[start]);
		start++;
	}
	printf("%d\n", array[start]);
}
