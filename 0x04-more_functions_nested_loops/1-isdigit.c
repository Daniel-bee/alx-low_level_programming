#include "holberton.h"
/**
 * _isdigit - checks for digit characters
 * @c: accept an integer characters
 * Return: 1 if digit else 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
