#include "holberton.h"
/**
 *_putchar - writes the character c to stdout
 * @c: The character to print
 *Return: return string characters
*/
/*int _putchar(char c);*/
/**
 *print_alphabet - writes the lower alphabet c to stdout
 *Return: return string characters
*/
void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return;
}
