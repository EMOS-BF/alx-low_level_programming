#include<stdio.h>
#include "main.h"
/**
* _lenght - checks the length of a string
* @s: is the string
* Return: return the leng of the string
*/
int _lenght(char *s)
{
if (*s == '\0')
	return (0);
return (1 + _lenght(s + 1));
}
/**
* checkp - checks if the string is palindrome
* @i: is the index
* @lg1 and lg2: are the length of the strings
* @s1 and s2: are the strings
* Return: 1 if two strings are identical or 0 if not
*/
int compare(int lg1, int lg2, char *s1, char *s2)
{
if (lg1 == lg2)
{
if (s1[lg1] == s2[lg2])
{
return (compare(lg1 - 1, lg2 - 1, s1, s2));
}
else if (s1[lg1] != s2[lg2])
{
return (1);
}
else
{
return (0);
}
}
return (0);
}
/**
* wildcmp - Checks if a strings are identical
* @s1 and s2: are the strings
* Return: return 1 if the string are identical or 0 otherwise
*/
int wildcmp(char *s1, char *s2)
{
return (compare(_lenght(s1) - 1, _lenght(s2) - 1, s1, s2));
}
