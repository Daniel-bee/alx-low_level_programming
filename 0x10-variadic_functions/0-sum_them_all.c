#include <stdarg.h>
/**
* sum_them_all - returns the sum of all its parameters.
* @n: number of arg
* Return: total sum of arg
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	if (n == 0)
		return (n);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
