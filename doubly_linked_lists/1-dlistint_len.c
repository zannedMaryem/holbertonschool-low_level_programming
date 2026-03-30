#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_len - a function that counts the elements of a doubly linked list
 * @h: the head of the linked list
 * Return: the number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
