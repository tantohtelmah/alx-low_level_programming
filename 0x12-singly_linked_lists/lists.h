#ifndef LIST_H
#define LIST_H
#include <stddef.h>

/**
 * struct list - struct
 * @len: int
 * @str: char
 * @next: struct list*
*/
typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void __attribute__((constructor)) apres();

#endif /* LIST_H */
