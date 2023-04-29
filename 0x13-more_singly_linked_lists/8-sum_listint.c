#include "lists.h"
/**
  * sum_listint -  returns the sum of all the data (n)
  *
  * @head: head node
  *
  * Return: sum of all data
  */
int sum_listint(listint_t *head)
{
	listint_t *curr;
	int sum = 0;

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
