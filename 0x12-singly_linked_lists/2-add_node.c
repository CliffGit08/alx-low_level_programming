#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nw_node;
	size_t n;

	nw_node = malloc(sizeof(list_t));
	if (nw_node == NULL)
		return (NULL);

	nw_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	nw_node->len = n;
	nw_node->next = *head;
	*head = nw_node;

	return (*head);
