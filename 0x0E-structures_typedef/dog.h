#ifndef DOG
#define DOG
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
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG */
