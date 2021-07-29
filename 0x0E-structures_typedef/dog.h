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
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG */
