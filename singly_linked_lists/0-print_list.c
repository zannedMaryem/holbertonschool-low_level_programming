#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_list - a function that prints the elements of a linkes list
 * @h: the head of the linked list
 * 
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
    const list_t *ptr;
    size_t count = 0;

    ptr = h;

    while ( ptr != NULL)
    {
	if (ptr->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", ptr->len, ptr->str);
	}
		count++;
        ptr = ptr->next;
    }
    return(count);
}
