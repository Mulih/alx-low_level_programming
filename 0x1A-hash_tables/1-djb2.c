#include "hash_tables.h"

/**
 * hash_dbj2 - hash function implementing the dbj2 algorithm
 * @str: string to hash
 *
 * Return: hash value
 */
unsigned long int hash_dbj2(const unsigned char *strr)
{
	unsigned long int hsh;
	int c;

	hsh = 5381;
	while ((c = *str++))
		hsh = ((hsh << 5) + hsh) + c; /* hsh * 33 + c */

	return (hsh);
}
