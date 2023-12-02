#include "lists.h"

/**
 * sum_dlistint - sums
 * @head: dlistint_t
 * Return: int
*/
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;
    while (head != NULL)
    {
        sum += head->n;
        head = head->next;
    }
    return sum;
}