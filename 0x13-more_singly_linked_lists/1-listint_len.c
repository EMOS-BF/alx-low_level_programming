#include "lists.h"
#include <stdio.h>

/**
* listint_len - Calculate the number of elements.
* @h: Pointer to a list.
* Return: Integer.
**/

size_t listint_len(const listint_t *h)
{
size_t count = 0;
const listint_t *temp;
temp = h;
while (temp != NULL)
{
temp = temp->next;
count++;
}
return (count);
