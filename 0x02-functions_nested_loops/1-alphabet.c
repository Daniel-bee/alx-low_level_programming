#include "holberton.h"
/**
 *print_alphabet - writes the lower alphabet c to stdout
*/
void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
      
}
