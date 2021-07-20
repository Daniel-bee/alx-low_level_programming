#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - print string
* @name: pointer name to char
* @f: pointer function f that accept pointer that point to char
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
