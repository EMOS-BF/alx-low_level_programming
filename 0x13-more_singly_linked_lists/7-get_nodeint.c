#include "lists.h"
#include <stdlib.h>
/**
* get_nodeint_at_index - Find a node in a list.
* @head: Address of the first node in a list.
* @index: Position of a the node to find (starting from 0).
* Return: Node address.
**/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int count = 0;
while (current != NULL)
{
if (count == index)
{
return (current);
}
count++;
current = current->next;
}
return (NULL);
}
