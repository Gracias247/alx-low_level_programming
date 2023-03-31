#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list_t list
 * @h: pointer to the head of the linked list_t list
 * Return: the number of nodes in the linked list_t list
 * Description: If str is NULL, print [0] (nil).
 * You are allowed to use printf.
**/

size_t print_list(const list_t *h);
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		count++;
		h = h->next;
	}

	return (count)
}
