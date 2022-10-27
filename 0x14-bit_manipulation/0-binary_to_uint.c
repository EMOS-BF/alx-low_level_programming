#include "main.h"
/**
* binary_to_uint - function that converts a binary number to an
* unsigned int
* @b: Pointer with the string whit the number to convert
* Return: The number converted
*/
unsigned int binary_to_uint(const char *b)
{
    int slen = strlen(b);
    int decal =1;
    int convert_number = 0;
    for (int i = (slen-1); i>=0; i--)
    {
        if (b[i] == '1')
        {
            convert_number += decal;
        }
        decal *= 2;
    }
    return convert_number;
}
