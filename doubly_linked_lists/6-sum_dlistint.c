#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_dlistint - a function that finds a node at
 * index.
 * @head: the head of the linked list.
 * Return: the adress of the node at index or NULL if not found.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
