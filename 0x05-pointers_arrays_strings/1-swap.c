#include "holberton.h"
/**
  * swap_int - swap a value
  * @a: int value
  * @b: int value
  */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
