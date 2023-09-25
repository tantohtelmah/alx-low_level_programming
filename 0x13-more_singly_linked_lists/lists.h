#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdio.h>

/**
 * struct listint_t - structure
 * @n: size_t
 * @next: struct listint_t
*/

typedef struct listint_t
{
	int n;
	struct listint_t *next;
} listint_t;


size_t print_listint(const listint_t *h);



#endif /* LISTS_H */
