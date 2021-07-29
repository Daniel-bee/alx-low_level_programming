#include "holberton.h"
/**
 *print_alphabet_x10 - print lowercase alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char b;

	for (a = 0; a < 10; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
