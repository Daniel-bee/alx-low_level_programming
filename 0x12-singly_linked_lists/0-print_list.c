#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: list
 * Return: node count
 */
size_t print_list(const list_t *h)
{
	size_t nodecount = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nodecount++;
	}

	return (nodecount);
}
