#include "lists.h"

/**
* delete_nodeint_at_index - a function that deletes the
* node at index of a listint_t linked list.
* @head: a pointer to the head of the list
* @index: the index of the node to be deleted
* Return: returns 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int p = 0;
	listint_t *ptr = *head;
	listint_t *count = NULL;

	 if (!(*head))
		return (-1);

	 if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}

	for (p = 0; p < index - 1; p++)
	{
		if (!ptr || !(ptr->next))
			return (-1);
		ptr = ptr->next;
	}
	count = ptr->next;
	ptr->next = count->next;
	free(count);

	return (1);
}
