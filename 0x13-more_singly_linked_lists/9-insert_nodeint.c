#include "lists.h"

/**
* insert_nodeint_at_index - a function that inserts a new node
* at a given position.
* @head: a pointer to the head of the linked list
* @idx: the index of the list where the new node should be added.
* Index starts at 0
*
* @n: the data to be added to the new node
* Return: returns the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *count;
	unsigned int p = 0;

	if (!head)
		return (NULL);

	count = malloc(sizeof(listint_t));
	if (!count)
		return (NULL);

	count->n = n;
	count->next = NULL;

	if (idx == 0)
	{
		count->next = (*head);
		*head = count;
		return (count);
	}

	ptr = *head;

	for (p = 0; ptr && p < idx; p++)
	{
		if (p == idx - 1)
		{
			count->next = ptr->next;
			ptr->next = count;
			return (count);
		}
		else
			ptr = ptr->next;
	}
	return (NULL);
}
