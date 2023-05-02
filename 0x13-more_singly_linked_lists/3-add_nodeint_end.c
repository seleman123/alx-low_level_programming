#include "lists.h"

/**
* add_nodeint_end - a function that adds a new node at the end
* of a listint_t list.
* @head: the head of the listint_t list
* @n: the data to be added to the new node
* Return: returns the address of the new element, or NULL if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *count;
	listint_t *ptr;

	count = malloc(sizeof(listint_t));
	if (count == NULL)
		return (NULL);
	ptr = *head;

	if (*head == NULL)
	{
		count->next = NULL;
		count->n = n;
		*head = count;

		return (count);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	count->next = NULL;
	count->n = n;
	ptr->next = count;

	return (count);
}
