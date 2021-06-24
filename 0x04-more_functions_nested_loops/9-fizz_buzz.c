#include <stdio.h>
#include "holberton.h"
/**
 * main - prints square
 * Return: zero
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if (i % 3 == 0 && i % 5 == 0)
		{
			if (i <= 99)
			printf("FizzBuzz ");
			else
			printf("FizzBuzz");
		}
		else
		{
			if (i % 3 == 0)
			{
				printf("Fizz ");
			}
			if (i % 5 == 0)
			{
				printf("Buzz ");
			}
		}
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
