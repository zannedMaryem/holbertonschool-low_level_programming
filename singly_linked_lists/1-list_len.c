#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * list_len - a function that prints the elements of a linkes list
 * @h: the head of the linked list
 * Return: the number of elements.
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	size_t count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
