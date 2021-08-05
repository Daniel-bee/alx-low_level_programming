#include "main.h"
unsigned int _pow(unsigned int);
/**
 * binary_to_uint - onverts a binary number to an unsigned int
 * @b: char string
 * Return: decimal value
 */
unsigned int  binary_to_uint(const char *b)
{
	unsigned int len, num;
	int j = 0, i, l = 0;

	if (!b)
		return (0);
	while (b[l])
	{
		if ((b[l] != '0' && b[l] != '1'))
			return (0);
		l++;
	}

	while (b[j])
	j++;

	len = j - 1;
	num = (b[0] - '0') * _pow(len);

	for (i = 1; b[i] != '\0'; i++)
		num += ((b[i] - '0') * _pow(--len));
	return (num);
}
/**
* _pow - perform power of a number
* @x: value of a given number
* Return: power of number
*/
unsigned int _pow(unsigned int x)
{
	int po = 1;

	if (x == 0)
		return (1);
	while (x--)
		po *= 2;
	return (po);
}
