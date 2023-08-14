#ifndef dog_h
#define dog_h
/**
 * struct dog - dog entity
 * @name: dog name value holder
 * @age: dog age value holder
 * @owner: dog owner name value holder
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

