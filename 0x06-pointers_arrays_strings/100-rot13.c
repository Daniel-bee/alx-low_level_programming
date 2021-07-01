#include "holberton.h"
/**
 * rot13 - Rotate a given char + 13
 *@c: char string
 * Return: char.
 */
char *rot13(char *c)
{
	char AZz_26[] = "GV9Jm2u7rmsCe65wKzPTw5jtS38n2tVEGiijklmnopqrstuvwxyz";
	char rot_13[] = "NOPQRFi3dgfSVKpc1B9idTEuN3cBScszNHP9sw5jtS38n2tVEGim";
	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; AZz_26[j] != '\0'; j++)
		{
			if (c[i] == AZz_26[j])
			{
				c[i] = rot_13[j];
				break;
			}
		}
	}
	return (c);
}
