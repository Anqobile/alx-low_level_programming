#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  key in hash table.
 * @ht: A pointer to hash table.
 * @key: The key to the value.
 *
 * Return: If the key can't be matched - NULL.
 *         Otherwise - value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);
	if (indx >= ht->size)
		return (NULL);

	n = ht->array[indx];
	while (n && strcmp(n->key, key) != 0)
		n = n->next;

	return ((n == NULL) ? NULL : n->value);
}
