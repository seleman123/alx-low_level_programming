#include <stdio.h>
#include "lists.h"

#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;    }
	return (count);
}
