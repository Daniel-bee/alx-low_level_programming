#include "search_algos.h"
void print_array(int *, int, int);
int binary_s(int *, size_t, size_t, int);
/**
 *exponential_search -  searches for a value in a sorted array of
 *integers using the Exponential search algorithm
 *@array: pointer to the first element of the array to search in
 *@size: size of an array
 *@value: value search for
 *Return: (-1) on failure (index) on success
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t index = 0, high;

	if (!array)
		return (-1);
	if (value == array[0])
		return (0);
	index = 1;
	while (index < size && array[index] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		index *= 2;
	}
	if (index > size - 1)
		high = size - 1;
	else
		high = index;
	if (high == size - 1)
		printf("Value found between indexes [%ld] and [%ld]\n", index / 2, high);
	return (binary_s(array, index / 2, high, value));
	return (-1);
}
/**
 *binary_s - searches for a value in a sorted array
 *of integers using the Binary search algorithm
 *@array: pointer to the first element of the array to search in
 *@low: start index
 *@high: end index
 *@value: the value to search for
 *Return: (-1) if not exist or empty array
 */
int binary_s(int *array, size_t low, size_t high, int value)
{
	size_t  mid;

	while (low <= high)
	{
		mid = (low + high) / 2;
		print_array(array, low, high);

		if (array[mid] == value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);
			return (mid);
		}
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
/**
 *print_array - print a given array
 *@list: array elelment
 *@start: start index of an array
 *@end: end index of an array
 */
void print_array(int *list, int start, int end)
{
	printf("Searching in array: ");
	while (start < end)
	{
		printf("%d, ", list[start]);
		start++;
	}
	printf("%d \n", list[start]);
}
