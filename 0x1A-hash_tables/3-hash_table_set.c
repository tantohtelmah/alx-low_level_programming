#include "hash_tables.h"


/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_t *new_item = NULL, *temp = NULL;

    printf("i am here\n");

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);
    printf("i am here\n");
    index = key_index((unsigned char *)key, ht->size);
    printf("%ld", index);
    fflush(stdout);
    temp = ht->items[index];

    printf("i am here\n");
    while (temp != NULL)
    {
        if (strcmp(temp->key, key) == 0)
        {
            free(temp->value);
            temp->value = strdup(value);
            if (temp->value == NULL)
                return (0);
            return (1);
        }
        temp = temp->next;
    }

    new_item = malloc(sizeof(hash_t));
    if (new_item == NULL)
        return (0);

    new_item->key = strdup(key);
    if (new_item->key == NULL)
    {
        free(new_item);
        return (0);
    }

    new_item->value = strdup(value);
    if (new_item->value == NULL)
    {
        free(new_item->key);
        free(new_item);
        return (0);
    }

    new_item->next = ht->items[index];
    ht->items[index] = new_item;

    return (1);
}
