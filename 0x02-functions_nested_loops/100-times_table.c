#include "holberton.h"
#include <stdio.h>
/**
*print_times_table- compute time table
*/
void print_times_table(int n)
{
	int i, j, pro;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			pro = i * j;
			if (pro == 0)
			{
				if (i == 0 && j >= 1)
					printf("%3d", pro);
				else
					printf("%d", pro);
			}
			else
			{
				printf("%3d", pro);
			}
			if (j < n)
				printf(",");
			else
				_putchar('\n');
		}
	}
}
