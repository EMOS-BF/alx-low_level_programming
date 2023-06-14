#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
* insert_nodeint_at_index - Insert a new node at a given positiion.
* @head: First node address.
* @idx: Position of the new node to be inserted in.
* @n: Data of the new node.
* Return: Address of the new node.
**/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *ptr1 = *head;
listint_t *ptr2 = (listint_t *)malloc(sizeof(listint_t));
ptr2->n = n;
ptr2->next = NULL;
if (*head == NULL && idx != 0)
{
return (NULL);
}
if (ptr2 == NULL)
{
return (NULL);
}
while (idx != 1)
{
ptr1 = ptr1->next;
idx--;
}
ptr2->next = ptr1->next;
ptr1->next = ptr2;
return (ptr1);
}
