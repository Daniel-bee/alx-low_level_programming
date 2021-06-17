#include<stdio.h>
/**
 * main - start here
 * printf - Prints "Size"
 * return - return zero
 * Return: 
 */
int main()
{
    char hello[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    char *s;
    int out;

    s = hello;
    while( *s != '\0' )
    {
        out = putchar(*s);
        if( out==EOF || ferror(stdout) )
        {
            puts("\nFile error");
            clearerr(stdout);
            return(1);
        }
        s++;
    }

    return(0);
}
