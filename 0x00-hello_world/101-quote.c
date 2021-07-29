#include<stdio.h>
/**
 * main - start here
 * return - return 1
 * Return: 1
 */
int main(void)
{
char hello[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
char *s;
int out;
s = hello;
while (*s != '\0')
{
out = putchar(*s);
if (out == EOF || ferror(stdout))
{
puts("\nFile error");
clearerr(stdout);
return (1);
}
s++;
}
return (1);
}
