#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: separate strings
 * @n: number of arg
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (!str)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
