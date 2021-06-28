#include "holberton.h"
/**
 * _strlen - string length
 * @s: characters pointer
 * Return: string length
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
/**
  * puts_half - swap a value
  * @str: char value
  */
void puts_half(char *str)
{
	int i = _strlen(str) / 2;

	while (i < _strlen(str))
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
