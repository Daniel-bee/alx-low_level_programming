#include "holberton.h"
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
  * puts2 - swap a value
  * @str: char value
  */
void puts2(char *str)
{
	int i = 0;

	while (i < _strlen(str))
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
