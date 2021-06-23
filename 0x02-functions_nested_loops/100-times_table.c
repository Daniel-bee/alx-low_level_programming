#include "holberton.h"
#include <stdio.h>
/**
*print_times_table- compute time table
*@n: is an intger
*@val: pro
*/
void space(int n, int val)
{
	if (n <=9)
	{
		printf("%5d", val);
	}
	else if (n > 9 && n <= 99)
	{
		printf("%3d", val);
	}
	else if (n > 99)
	{
		printf("%2d", val);
	}
}
void print_times_table(int n)
{
	int i, j, pro;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			pro = i * j;
			if(pro == 0)
			{
				if (i == 0 && j >= 1)
					space(n, pro);
				else
					printf("%d", pro);
			}
			else
			{
				space(n, pro);
			}
			if (j < n)
				printf(",");
			else
				_putchar('\n');
		}
	}
}
