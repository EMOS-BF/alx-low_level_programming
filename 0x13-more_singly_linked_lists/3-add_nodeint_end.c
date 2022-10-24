#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint_end - Add a new node at the end of a list.
* @head: Address of the first node of a list.
* @n: Integer to insert in the new node.
* Return: Address of the new node.
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode;
listint_t *temp;
temp = *head;
newnode = (listint_t *)malloc(sizeof(listint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
*head = newnode;
return (newnode);
}
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newnode;
return (newnode);
}
