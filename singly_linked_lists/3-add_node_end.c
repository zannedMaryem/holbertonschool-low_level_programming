#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - a function that add a node at the end of a list
 * @head: the head of the linked list
 * @str: string to add
 * Return: the number of elements.
 */
int _strlen(const char *s);
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
	tmp->len = _strlen(str);
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
/**
 * _strlen - calculates the length of a string
 * @s: input string
 *
 * Return : string length.
 */
int _strlen(const char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}