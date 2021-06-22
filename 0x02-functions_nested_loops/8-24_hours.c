#include "holberton.h"
/**
 *jack_bauer - Jack Bauer, starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
    int a, b, c, d;

    for (a = 48; a <= 50; a++)
	{
    	for (b = 48; b <= 51; b++)
    	{
    		for (c = 48; c <= 53; c++)
    		{
    			for (d = 48; d <= 57; d++)
	    		{
	    			_putchar(a);
	    			_putchar(b);
    				_putchar(':');
	    			_putchar(c);
    				_putchar(d);
    				_putchar('\n');
				}
			}
	}
	}
}
