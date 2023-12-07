#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * struct hash_table_item - defines a hash table item
 * @key: acts like an index
 * @value: value
 * @next: pointer to the next item in the hash table
 * @Return: hast_t
*/
typedef struct hash_table_item
{
	char *key;
	char *value;
	struct hash_table_item *next;

} hash_t;

/**
 * struct hash_table - defines the hash table
 * @items: hash table items
 * @size: size of the table
 * @count: returns the number of elements in the has table
 * @Return: table
*/

typedef struct hash_table
{
	hash_t **items;
	int size;
	int count;
} hash_table_t;


unsigned long int hash_djb2(const unsigned char *str);
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);

#endif /* HASH_TABLE_*/
