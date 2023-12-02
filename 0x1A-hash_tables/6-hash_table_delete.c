#include "hash_tables.h"

/**
* hash_table_delete - deletes a hash table
* @ht: the hash table to delete
*/
void hash_table_delete(Hash_table_t *ht)
{
	unsigned long int i;

	hash_t *temp = NULL, *next = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->items[i];
		while (temp != NULL)
		{
			next = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = next;
		}
	}

	free(ht->items);
	free(ht);
}
