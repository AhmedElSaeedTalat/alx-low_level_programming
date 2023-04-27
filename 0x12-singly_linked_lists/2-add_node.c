#include "lists.h"
/**
  * s_len - count length
  *
  * @str: str received
  *
  * Return: count
  */
int s_len(const char *str)
{
	int count;
	const char *ptr = str;

	count = 0;

	while (*ptr != '\0')
	{
		count++;
		ptr++;
	}
	return (count);
}
/**
  * add_node - adds a new node at the beginning
  *
  * @head: current head of linked list
  *
  * @str: string received
  *
  * Return: new address
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = s_len(str);
	new->next = *head;
	*head = new;
	return (new);
}
