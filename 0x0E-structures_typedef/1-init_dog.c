#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* init_dog - init struct object.
* @d: struct type
* @name: name
* @age: age
* @owner: awner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
