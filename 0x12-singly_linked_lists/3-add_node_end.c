#include "lists.h"
#include <string.h>
/**
 * add_node_end - new node at the end of a list_t list.
 * @head: head
 * @str: char string
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;
	list_t *tmp = (*head);

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));

	if (!(*head))
	{
		*head = newnode;
		return (newnode);
	}
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newnode;

	return (newnode);
}
