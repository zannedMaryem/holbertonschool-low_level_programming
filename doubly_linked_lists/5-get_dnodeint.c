#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - a function that finds a node at
 * index.
 * @head: the head of the linked list.
 * @index: index of the node.
 * Return: the adress of the node at index or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}