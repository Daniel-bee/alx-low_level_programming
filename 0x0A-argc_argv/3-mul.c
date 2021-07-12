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
	int i;
	unsigned int pro = 1;

	if (argc - 1 < 1)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
			pro *= atoi(argv[i]);
	printf("%u\n", pro);
	}
	return (0);
}
