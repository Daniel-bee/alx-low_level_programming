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
int intType;
long int longIntType;
long long int longLongIntType;
float floatType;
char charType;
printf("Size of a char: Size of a char: %zu bytes\n", sizeof(charType));
printf("Size of an int: %zu bytes\n", sizeof(intType));
printf("Size of a long int: %zu bytes\n", sizeof(longIntType));
printf("Size of a long long int: %zu bytes\n", sizeof(longLongIntType));
printf("Size of a float: %zu bytes\n", sizeof(floatType));
return (0);
}
