#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
* print_dog - init struct object.
* @d: struct type
*/
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("%s\n", d->name);
	if (d->age == NULL)
		printf("Age: (nil)\n");
	else
		 printf("%f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("%s\n", d->owner);
}
