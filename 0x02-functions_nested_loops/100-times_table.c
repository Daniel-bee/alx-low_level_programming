#include "holberton.h"
#include <stdio.h>
/**
*print_times_table- compute time table
*@n: is an intger
*@val: pro
*/
void space(int val)
{
	if (val <= 9)
	{
		 _putchar(' ');
	     _putchar(' ');
	     _putchar(' ');
		printf("%d", val);
		
	}
	else if (val > 9 && val <= 99)
	{
        _putchar(' ');
        _putchar(' ');
		printf("%d", val);

	}
	else if (val > 99)
	{
		_putchar(' ');
		printf("%d", val);

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
					space(pro);
				else
					printf("%d", pro);
			}
			else
			{
				space(pro);
			}
			if (j < n)
				printf(",");
			else
				printf("\n");
		}
	}
}
