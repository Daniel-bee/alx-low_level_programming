#include "lists.h"
/**
 *add_nodeint- adds a new node at the beginning of a listint_t list
 *@h: list
 *Return: address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = (listint_t*)malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = (*head);
	(*head) = tmp;
	
	return (*head);
}
