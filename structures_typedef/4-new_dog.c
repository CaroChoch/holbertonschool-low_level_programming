#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);


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
	char *copy_name, *copy_owner;
	unsigned int i, name_len = 0, owner_len = 0;

	new_dog_name = malloc(sizeof(struct dog));
	if (name == NULL)
		return (NULL);
	if (name == NULL || age <= 0 || owner == NULL)
	{
		free (new_dog_name);
		return (NULL);
	}

	for (i = 0; name [i] != '\0'; i++)
		name_len++;

	for (i = 0; owner[i] != '\0'; i++)
		owner_len++;

	copy_name = malloc(sizeof(char) * (name_len + 1));
	if (copy_name == NULL)
		return (NULL);

	copy_owner = malloc(sizeof(char) * (owner_len + 1));
	if (copy_owner == NULL)
		return (NULL);

	for (i = 0; i <=name_len; i++)
		copy_name[i] = name[i];

	for (i = 0; i <= owner_len; i++)
		copy_owner[i] = owner[i];

	new_dog_name->name = copy_name;
	new_dog_name->owner = copy_owner;
	new_dog_name->age = age;
	
	return (new_dog_name);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
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

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	dest[j++] = '\0';

	return (dest);
}
