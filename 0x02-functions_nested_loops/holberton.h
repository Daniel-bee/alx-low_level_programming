int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
