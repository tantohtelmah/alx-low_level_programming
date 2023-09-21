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

#endif /* LIST_H */
