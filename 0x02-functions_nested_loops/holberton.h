int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
	int d;

	for (d = 97; d <= 122; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
