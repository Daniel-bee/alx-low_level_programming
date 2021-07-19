#include <stdio.h>
#include "dog.h"
/**
* struct dog - create three object
* @name: string
* @age : float
* @owner: char string
* Description: dog struct create name, age, and owenr objects
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
* init_dog - init struct object.
* @d: struct type
* @name: name
* @age: age
* @owner: awner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	 d->name = name;
	 d->age = age;
	 d->owner = owner;
}
