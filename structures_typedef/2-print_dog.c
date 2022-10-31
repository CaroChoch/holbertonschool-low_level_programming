#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a
 * struct dog.
 *
 * @d:struct dog to be printed
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	else
		printf("Name: %s\n", d->name);

	if(d->age <= 0)
		printf("Age: (nil)\n");
	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		d->owner = "(nil)";
	else
		printf("owner: %s\n", d->owner);
}

