#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - function that concatenates two strings.
* if NULL is passed, treat it as an empty string
*The function should return NULL on failure
* @s1: This is the output string
* @s2: This is the input string
* Return: The returned pointer should point to a newly allocated space in
*memory which contains the contents of s1, followed by the contents 
*of s2, and null terminated
*/
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	s = (char *)  malloc(((i + j) + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}
	return (s);
}
