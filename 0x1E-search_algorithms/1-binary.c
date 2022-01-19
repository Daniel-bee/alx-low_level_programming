#include "search_algos.h"
void print_array(int *, int, int);
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

	while (start <= end)
	{
		print_array(array, start, end);

		mid = (end + start) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
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
	if (start > end)
		return;
	
	printf("Searching in array: ");
	while (list && start < end)
	{
		printf("%d, ", list[start]);
		start++;
	}
	printf("%d \n", list[start]);
}
