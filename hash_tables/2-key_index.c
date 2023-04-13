#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: key, the string to apply the algorithm to
 * @size: size of the array of the hash table
 * Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result, index;

	if (size == 0)
		return (0);

	result = hash_djb2(key);
	index = result % size;
	return (index);
}
