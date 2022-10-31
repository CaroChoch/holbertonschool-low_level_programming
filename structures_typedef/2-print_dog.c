#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

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
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("owner: %s\n", d->owner);
}

