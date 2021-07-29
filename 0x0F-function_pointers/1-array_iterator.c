#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - function given as a parameter on each element of an array
* @array: base address
* @size: array size
* @action: pointer function action accept an int retun empty
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
