#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * isInt - checks for int
 * @s: string
 * Return: 0 or 1
 */
int isInt(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}
/**
* main - program that multiplies two numbers
* @argc: count arg
* @argv: arg vector
* Return: zero
*/
int main(int argc, char *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (isInt(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
		printf("%d\n", sum);

	return (0);
}
