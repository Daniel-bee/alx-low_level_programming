#include <stdio.h>
#include "holberton.h"
/**
 *print_to_98- print 98
 *@n: accept an integer
 *Return: the sum of 2 numbers
 */
void print_to_98(int n)
{
int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n")

}
