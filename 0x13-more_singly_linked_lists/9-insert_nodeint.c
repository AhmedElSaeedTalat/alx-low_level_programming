#include "lists.h"
/**
  * insert_nodeint_at_index - inserts a new node at a given position
  *
  * @head: head node
  *
  * @idx: index
  *
  * @n:
  *
  * Return: address of new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr, *new;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = (*head)->next;
		*head = new;
		return (new);
	}
	curr = *head;
	i = 0;
	while (curr != NULL)
	{
		if (i + 1 == idx)
		{
			new->next = curr->next;
			curr->next = new;
			return (new);
		}
		curr = curr->next;
		i++;
	}
	free(new);
	return (NULL);
}
