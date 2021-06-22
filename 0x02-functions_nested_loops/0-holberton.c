#include <unistd.h>
/**
 *_putchar - writes the character c to stdout
 * @c: The character to print
 *Return: return string characters
*/
int _putchar(char c);
/**
 *main - count characters and print as string result
 *Return: zero
 */
int main(void)
{
	char *c = "Holberton";
	int b = 0, d;

	while (c[b] != '\0')
	{
		b++;
	}
	for (d = 0; d < b; d++)
	{
		_putchar(c[d]);
	}
	_putchar('\n');
	return (0);
}
