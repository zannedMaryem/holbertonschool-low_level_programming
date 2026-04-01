#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - a function that adds a node at
 * index.
 * @h: the head of the linked list.
 * @idx: position of the node to add.
 * @n: data to add at node.
 * Return: the adress of the node at index or NULL if not found.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *pos;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (new == NULL)
	{
		return (NULL);
	}
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new;
		}
		*h = new;
		return (new);
	}
	pos = *h;
	while (pos != NULL && i < idx - 1)
	{
		pos = pos->next;
		i++;
	}
	if (pos == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = pos->next;
	new->prev = pos;
	if (pos->next != NULL)
	{
		pos->next->prev = new;
	}
	pos->next = new;
	return (new);
}
