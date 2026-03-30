#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - a function that prints the elements of a linkes list
 * @h: the head of the linked list
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
