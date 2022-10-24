#include "lists.h"
#include <stdio.h>

/**
* print_listint - Print elements of a singly linked list.
* @h: Pointer to a list.
* Return: Integer.
**/
size_t print_listint(const listint_t *h)
{
size_t count = 0;
const listint_t *temp;
temp = h;
while (temp != NULL)
{
if (temp->n == NULL)
{
printf("[%d] %d\n", 0, "(nil)");
}
else
{
printf("%d\n", temp->n);
}
temp = temp->next;
count++;
}
return (count);
