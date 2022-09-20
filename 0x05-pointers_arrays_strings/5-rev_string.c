#include "main.h"
#include <stdio.h>
/**
* rev_string - This fuction print a string reverser
*
*@s: this is the pointer that point to a string
*/
void rev_string(char *s)
{
int a , len1 , len2;
char tmp ;
len1 = 0;
len2 = 0;
while (s[len1] != '\0')
	len1++;
len2 = len1 - 1;
for (a = 0 ; a < (len1 / 2) ; a++)
{
tmp = s[a];
s[a] = s[len2];
s[len2] = tmp;
len2  = len2 - 1;
}
}
