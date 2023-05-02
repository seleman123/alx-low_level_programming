#include "lists.h"

/**
* add_nodeint - a function that adds a new node at the beginning
* of a listint_t list.
* @head: the head of the listint_t list
* @n: the data to be added in the new node
* Return: returns the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *count = malloc(sizeof(listint_t));

	if (count == NULL)
		return (NULL);

	if (*head == NULL)
	{
		count->n = n;
		count->next = NULL;
		*head = count;

		return (count);
	}

	 count->next = *head;
	count->n = n;
	*head = count;

	return (count);
}
