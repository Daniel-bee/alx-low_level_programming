#include <stdio.h>
/* more headers goes there */
/**
* main - start here
* Return: return 0
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'e' && ch != 'q')
	{
	putchar(ch);
	}
	}
	putchar ('\n');
	return (0);
}
