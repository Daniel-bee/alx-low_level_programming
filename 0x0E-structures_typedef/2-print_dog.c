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
		printf("nil\n");
	}
	else
	{
		printf("%s\n", d->name);
		printf("%f\n", d->age);
		printf("%s\n", d->owner);
	}
}
