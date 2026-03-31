#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - a function that adds an element at
 * the end of a doubly linked list
 * @head: the head of the linked list.
 * @n: data to add.
 * Return: the adress of the new element or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));
	dlistint_t *ptr;

	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = tmp;
	return (tmp);
}
