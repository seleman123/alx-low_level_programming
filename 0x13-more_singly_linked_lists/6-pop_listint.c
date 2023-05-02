#include "lists.h"

/**
* pop_listint - a function that deletes the head node of a listint_t
* linked list, and returns the head node’s data (n).
* @head: a pointer to the head of the list
* Return: returns 0 if the linked list is empty
*/
int pop_listint(listint_t **head)
{
	int p;

	listint_t *ptr;

	if (*head == NULL)
		return (0);

	ptr = *head;
	p = (*head)->p;
	*head = (*head)->next;
	free(ptr);

	return (p);
}
