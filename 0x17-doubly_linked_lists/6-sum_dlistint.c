#include <stdio.h>
#include "lists.h"
/**
  * sum_dlistint - returns the sum of all the data
  *
  * @head: head of the list
  * Return: sum of all the data
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr;
	size_t sum = 0;

	if (head == NULL)
		return (0);
	curr = head;
	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
