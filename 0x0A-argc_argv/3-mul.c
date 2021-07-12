#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - program that multiplies two numbers
* @argc: count arg
* @argv: arg vector
* Return: zero
*/
int main(int argc, char *argv[])
{
	int i, pro = 1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
			pro *= atoi(argv[i]);
	printf("%d\n", pro);
	}
	return (0);
}
