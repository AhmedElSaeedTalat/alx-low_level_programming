#include "lists.h"
/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list
  *
  * @head: head node
  *
  * @index:
  *
  * Return: nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *curr;

	if (head == NULL)
		return (NULL);
	curr = head;
	i = 0;
	while (curr != NULL)
	{
		if (index == i)
			return (curr);
		curr = curr->next;
		i++;
	}
	return (NULL);
}
