#include "hash_tables.h"

/**
 * hash_table_get - Retrieve a value associated with a key
 * @ht: hash table
 * @key: key to use to retrieve value
 *
 * return: value associated with key or NULL if key not found
 */
char *hash_table_get(const hash_table_T *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int id;

	if (ht == NULL || key == NULL)
		return (NULL);

	id = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[id];

	if (tmp == NULL)
		return (NULL);

	while (strcmp(tmp->key, key) != 0)
		tmp = tmp->next;

	if (tmp == NULL)
		return (NULL);

	return (tmp->value);
}
