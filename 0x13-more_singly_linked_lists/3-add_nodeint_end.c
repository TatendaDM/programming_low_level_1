#include "lists.h"

/**
 * add_nodeint_end - inserts a node at the end of a linked list
 * @head: pointer to the 1st element in the list
 * @a: insert data to new element
 *
 * Return: NULL if it fails, pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int a)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->a = a;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
