#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  * print_list -  prints all the elements
  *
  * @h: list received
  *
  * Return: count elements
  */
size_t print_list(const list_t *h)
{
	int count;
	const list_t *ptr;

	ptr = h;
	count = 0;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[ %d ] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
