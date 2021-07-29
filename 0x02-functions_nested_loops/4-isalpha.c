#include "holberton.h"
/**
 *_isalpha - checks if lawcase or not
 * @c: accept char input
 *Return: 1 if lowercase else 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
