#include "lists.h"
void exbm(void) __attribute__ ((constructor));

/**
 * exbm - function that prints before the main
 * function is executed
 */
void exbm(void)
{
	printf("You're beat! and yet, you must allow,
		    \nI bore my house upon my back!\n");
}

