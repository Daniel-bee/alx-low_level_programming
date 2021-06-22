#include "holberton.h"
/**
*main- start here
*Return: zreo
*/
int main(void)
{
	char *c = "Holberton";
	int b = 0, d;

	while (c[b] != '\0')
	{
		b++;
	}
	for (d = 0; d < b; d++)
	{
		_putchar(c[d]);
	}
	_putchar('\n');
	return (0);
}

