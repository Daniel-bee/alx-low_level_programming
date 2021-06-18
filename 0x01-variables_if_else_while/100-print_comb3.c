#include <stdio.h>
/**
* main - start here
* Return: zero
*/
int main(void)
{
	int i;
	int j = 48;

	for (i = 48; i < 57; i++)
	{
	for (j = i + 1; j <= 57; j++)
	{
	putchar(i);
	putchar(j);
	if (i == 56 && j == 57)
	{
	putchar('\n');
	}
	else
	{
	putchar(44);
	}
	putchar(' ');
	}
	}
	return (0);
}
