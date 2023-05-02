#include "lists.h"

/**
* get_nodeint_at_index - a function that returns the nth node of a
* listint_t linked list.
* @head: the head of the list
* @index: the index of the node, starting at 0
* Return: return NULL if the node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *ptr;

	if (!head)
		return (NULL);

	ptr = head;

	while (ptr)
	{
		ptr = ptr->next;
		n++;
	}
	if (index >= n)
	{
		return (NULL);
	}

	n = 0;
	ptr = head;

	while (ptr && n < index)
	{
		ptr = ptr->next;
		n++;
	}

	return (ptr);
}
