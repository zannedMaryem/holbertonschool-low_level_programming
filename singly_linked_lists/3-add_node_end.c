#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - a function that add a node at the end of a list
 * @head: the head of the linked list
 * @str: string to add
 * Return: the number of elements.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = malloc(sizeof(list_t));
	list_t *ptr;

	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->str = strdup(str);
	if (tmp->str == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->len = strlen(str);
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
