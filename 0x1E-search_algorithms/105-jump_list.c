#include "search_algos.h"
#include <math.h>
/**
 * lsLinear_search - linear search
 *
 * @prev: prev node in the list passed
 * @tail: last node passed
 * @value: value to search
 *
 * Return: the node in case of match or NULL
 */
listint_t *lsLinear_search(listint_t *prev, listint_t *tail, int value)
{
	listint_t *curr;

	curr = prev;
	while (curr != tail)
	{
		printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
		if (curr->n == value)
		{
			return (curr);
		}
		curr = curr->next;
	}
	return (NULL);
}
/**
 * iterate_list - function to iterate list
 *
 * @curr: pointer to the node to iterate
 * @jump: number of jumps to use
 *
 * Return: pointer to the node iterated
 */
listint_t *iterate_list(listint_t *curr, int jump)
{
	int i;

	i = 0;
	while (curr != NULL && i < jump)
	{
		curr = curr->next;
		i++;
	}
	return (curr);
}
/**
 * jump_list - jump search
 *
 * @list: linked list passed
 * @size: size of the list
 * @value: value to search
 *
 * Return: node wth matched value or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump, x;
	listint_t *curr, *prev, *node;

	if (list == NULL)
		return (NULL);
	curr = list;
	if (curr->n == value)
	{
		return (curr);
	}
	jump = sqrt(size);
	prev = curr;
	curr = iterate_list(curr, jump);
	for (x = jump; x < (int) size - 1; x += jump)
	{
		printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
		if (curr->n == value)
			return (curr);
		if (curr->n > value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", prev->index,
					curr->index);
			node = lsLinear_search(prev, curr, value);
			return (node);
		}
		prev = curr;
		curr = iterate_list(curr, jump);
	}
	curr = prev;
	while (curr->next != NULL)
		curr = curr->next;
	printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
	if (curr->n == value)
		return (curr);
	return (NULL);
}
