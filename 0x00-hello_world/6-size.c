#include<stdio.h>
/**
 * main - start here
 * @intType: int type
 * @longIntType: long int type
 * @longLongIntType: long long type
 * @floatType: float type
 * @charType: char type
 * printf - Prints "Size"
 * return - return zero
 * Return: 0
 */
int main(void)
{
printf("Size of a char: Size of a char: %zu bytes\n", sizeof(char));
printf("Size of an int: %zu bytes\n", sizeof(int));
printf("Size of a long int: %zu bytes\n", sizeof(long int));
printf("Size of a long long int: %zu bytes\n", sizeof(long long int));
printf("Size of a float: %zu bytes\n", sizeof(float));
return (0);
}
