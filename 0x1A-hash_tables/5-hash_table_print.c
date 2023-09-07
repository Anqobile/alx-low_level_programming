#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash table.
 * @ht: A pointer to the hash table to be print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	unsigned long int x;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			n = ht->array[x];
			while (n != NULL)
			{
				printf("'%s': '%s'", n->key, n->value);
				n = n->next;
				if (n != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
