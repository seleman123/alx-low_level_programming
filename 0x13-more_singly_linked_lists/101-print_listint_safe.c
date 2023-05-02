#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: list of type listint_t to print
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t m = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		m++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (m);
}
