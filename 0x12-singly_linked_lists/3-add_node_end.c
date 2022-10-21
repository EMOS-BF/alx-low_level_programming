#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node_end - Add new node in the end of the linked list.
* @head: head of the linked list.
* @str: string to add.
* Return: pointer of the new node added to linked list.
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode;
list_t *temp;
temp = *head;
newnode = (list_t *)malloc(sizeof(list_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->str = strdup(str);
newnode->len = _strlen(str);
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
/**
* _strlen - Calculate lenght of a string.
* @s: string.
* Return: lenght of the string s.
*/

int _strlen(const char *s)
{
int idx = 0;
for (; s[idx]; idx++)
	;
return (idx);
}
