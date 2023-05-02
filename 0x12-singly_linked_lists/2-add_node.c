#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list
 * @str: new string to set in the new node
 *
 * Return: the address of the new node on success, or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int len = 0;

	while (str[len] != '\0')
		len++;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}
