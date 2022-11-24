#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 *
 * @ht: The hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int i = 0;
	char *coma  = "";

	if (ht == 0)
		return;

	printf("{");

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];

			while (tmp != NULL)
			{
				printf("%s'%s': '%s'", coma, tmp->key, tmp->value);
				coma = ", ";

				tmp = tmp->next;
			}
		}
	i++;
	}
	printf("}\n");
}

