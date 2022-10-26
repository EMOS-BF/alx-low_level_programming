#include "lists.h"
#include <stdlib.h>
/**
* delete_nodeint_at_index - Delete a node at a given positiion.
* @head: First node address.
* @index: Position of the node to delete.
* Return: If success (1).
**/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *current, *previous;
if (head == NULL || *head == NULL)
{
return (-1);
}
if (index == 0)
{
previous = (*head)->next;
free(*head);
*head = previous;
return (1);
}
current = *head;
for (i = 0; i < index - 1; i++)
{
if (current->next == NULL)
{
return (-1);
}
else
{
current = current->next;
}
}
previous = current->next;
current->next = previous->next;
free(previous);
return (1);
}
