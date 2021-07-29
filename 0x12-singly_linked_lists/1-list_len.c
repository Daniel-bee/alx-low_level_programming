#include "lists.h"
/**
 * list_len - the number of elements in a linked list_t list
 * @h: list
 * Return: length
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
