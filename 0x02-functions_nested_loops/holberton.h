#include <unistd.h>
int _putchar(char c);
void print_alphabet(void)
{
	char d;

	for (d = 97; d <= 122; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
