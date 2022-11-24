#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 *
 * @ht: The hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *del;
	unsigned long int i = 0;

	tmp = del = NULL;

	if (ht == 0)
		return;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];

			while (tmp != NULL)
			{
				del = tmp;
				tmp = tmp->next;
				free(del->key);
				free(del->value);
				free(del);
			}
		}
	i++;
	}

	free(ht->array);
	free(ht);
	ht = NULL;
}


