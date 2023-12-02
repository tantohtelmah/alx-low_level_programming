#include "hash_tables.h"

/**
* hash_table_print - prints a hash table
* @ht: the hash table to print
*/
void hash_table_print(const Hash_table_t *ht)
{
	unsigned long int i;

	hash_t *temp = NULL;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->items[i];
		while (temp != NULL)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			first = 0;
			temp = temp->next;
		}
	}
	printf("}\n");
}
