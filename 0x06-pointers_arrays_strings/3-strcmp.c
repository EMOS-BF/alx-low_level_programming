#include "main.h"
/**
*_strcmp - compares two strings.
*@s1: pointer to first string.
*@s2: pointer to second string.
*Return: value less than 0 if string is less than the other.
*value greater than 0 if string is greater than the other.
*0 if strings are equal.
*/
int _strcmp(char *s1, char *s2)
{
int count, Val;
counter = 0;
while (s1[count] == s2[count] && s1[count] != '\0')
{
count++;
}
Val = s1[count] - s2[count];
return (Val);
}
