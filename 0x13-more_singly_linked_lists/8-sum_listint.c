#include "lists.h"

/**
* sum_listint - a function that returns the sum of all
* the data (n) of a listint_t linked list.
* @head: the head of the list
* Return: return 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
