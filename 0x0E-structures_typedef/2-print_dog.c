#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
* print_dog - init struct object.
* @d: struct type
*/
void print_dog(struct dog *d)
{
	if (d->name == NULL || d->age == NULL || d->owner == NULL)
	{
		printf("Name: (nil)\n");
	else if (d->age == NULL)
	{
		printf("Age: (nil)\n");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("%s\n", d->name);
		printf("%f\n", d->age);
		printf("%s\n", d->owner);
	}
}
