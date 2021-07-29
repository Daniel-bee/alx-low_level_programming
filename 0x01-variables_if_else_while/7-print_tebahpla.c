#include <stdio.h>
/* more headers goes there */

/**
* main - start here
* Return: return 0
*/
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
