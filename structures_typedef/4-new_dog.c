#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}

	return (c);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value.
  *
  * Return: the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int j;
	int k = _strlen(src);

	for (j = 0; j <= k; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}

/**
 * new_dog - function that creates a
 * new dog.
 *
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: NULL if the function fails.
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog_name;

	new_dog_name = malloc(sizeof(new_dog_name));
	if (new_dog_name == NULL)
		return (NULL);

	new_dog_name->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (new_dog_name == NULL)
	{
		free(new_dog_name);
		return (NULL);
	}

	new_dog_name->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (new_dog_name->owner == NULL)
	{
		free(new_dog_name->name);
		free(new_dog_name);
		return (NULL);
	}

	new_dog_name->name = _strcpy(new_dog_name->name, name);
	new_dog_name->age = age;
	new_dog_name->owner = _strcpy(new_dog_name->owner, owner);

	return (new_dog_name);
}

