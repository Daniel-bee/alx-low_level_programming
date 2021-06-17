#include<stdio.h>
/**
 * main - start here
 * printf - Prints "Size"
 * return - return zero
 * Return: 0
 */
int main(void)
{
printf("Size of a char: Size of a char: %uz byte(s)\n", sizeof(char));
printf("Size of an int: %uz byte(s)\n", sizeof(int));
printf("Size of a long int: %uz byte(s)\n", sizeof(long int));
printf("Size of a long long int: %uz byte(s)\n", sizeof(long long int));
printf("Size of a float: %uz byte(s)\n", sizeof(float));
return (0);
}
