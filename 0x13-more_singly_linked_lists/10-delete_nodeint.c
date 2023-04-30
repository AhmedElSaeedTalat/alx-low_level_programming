#include "lists.h"
/**
  * get_len - count array nodes
  *
  * @head: head node
  *
  * Return: array len
  */
int get_len(listint_t **head)
{
	listint_t *curr;
	int i = 0;

	curr = *head;
	while (curr != NULL)
	{
		curr = curr->next;
		i++;
	}
	return (i);
}
/**
  * delete_nodeint_at_index - deletes the node at index
  *
  * @head: head node
  *
  * @index: index
  *
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i, length;
	listint_t *curr, *ptr;

	length = get_len(head);
	if (*head == NULL || index > length)
		return (-1);
	if (index == 0)
	{
		ptr = (*head);
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	i = 0;
	curr = *head;
	while (curr != NULL)
	{
		if (i + 1 == index)
		{
			ptr = curr->next;
			curr->next = ptr->next;
			free(ptr);
			return (1);
		}

		curr = curr->next;
		i++;
	}
	return (-1);
}
