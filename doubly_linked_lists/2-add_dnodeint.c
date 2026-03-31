#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - a function that adds an element at the beginning of a doubly linked list
 * @head: the head of the linked list.
 * @n: data to add.
 * Return: the adress of the new element or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->prev = NULL;
	tmp->n = n;
	tmp->next = NULL;
	tmp->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = tmp;
	}
	*head = tmp;
	return (*head);
}
