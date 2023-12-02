#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>

typedef struct hash_tables
{
	char *key;

	char *value;

	struct hash_tables *next;

} hash_t;

typedef struct Hash_table
{
	hash_t **items;
	int size;

	int count;

} Hash_table_t;


unsigned long int hash_djb2(const unsigned char *str);
Hash_table_t *hash_table_create(unsigned long int size);
unsigned long int key_index(const unsigned char *key, unsigned long int size);

#endif