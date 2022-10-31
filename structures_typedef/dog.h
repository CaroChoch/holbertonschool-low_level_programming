#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type describing dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: structure describing 3
 * parameters for dogs : name, age and
 * owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

