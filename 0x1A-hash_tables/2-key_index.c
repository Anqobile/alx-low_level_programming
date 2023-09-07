#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 *      pair should be stored in array of a hash table.
 * @key: The key to the index of.
 * @size: The size of an array of the hash table.
 *
 * Return: The key's index.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
