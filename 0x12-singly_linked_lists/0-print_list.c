#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: list
 * Return: node count
 */
size_t print_list(const list_t *h)
{
	size_t countnode = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s \n", tmp->len, tmp->str);

		countnode++;
		tmp = tmp->next;
	}
	return (countnode);
}
