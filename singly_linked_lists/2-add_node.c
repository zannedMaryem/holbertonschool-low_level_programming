#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * ladd_node - a function that adds a node at the beginning of a list
 * @head: the head of the linked list.
 * @str: string to add.
 * Return: the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = _strlen(str);
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
/**
 * _strlen - calculates the length of a string
 * @s: input string
 * Return: string length.
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
