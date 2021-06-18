#include <stdio.h>
/**
 * main - start here
 * Return: zero
*/
int main(void)
{
	int ch = 0;

	while (ch < 10)
	{
	putchar(48 + ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
