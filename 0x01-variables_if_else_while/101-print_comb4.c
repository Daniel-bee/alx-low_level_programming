#include <stdio.h>
/**
* main - start here
* Return: zero
*/
int main(void)
{
	int i;
	int j = 48;
	int k = 48;

	for (i = 48; i < 57; i++)
	{
	for (j = i + 1; j <= 57; j++)
	{
	for (k = j + 1; k <= 57; k++)
	{
	putchar(i);
	putchar(j);
	putchar(k);
	if ((i == 55 && j == 56) && k == 57)
	{
	putchar('\n');
	}
	else
	{
	putchar(44);
	putchar(' ');
	}
	}
	}
	}
	return (0);
}
