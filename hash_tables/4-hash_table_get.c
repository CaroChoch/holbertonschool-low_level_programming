#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 *
 * @ht: The hash table you want to look into.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found.
 */



char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
		return (NULL);

	if (ht != NULL || key != NULL)
	{		
		index = key_index((unsigned char *)key, ht->size);
		tmp = ht->array[index];
/* Loop till we find an empty file entry */
		while (tmp != NULL)
		{
		if (strcmp(key, tmp->key) == 0)
			/* found key, return value */
			return (tmp->value);
		/* key wasn't in the slot, move to next (linear probing) */

		tmp = tmp->next;
		}
	}
	return (NULL);
}





