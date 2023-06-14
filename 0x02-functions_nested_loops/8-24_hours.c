#include "main.h"
/**
* jack_bauer - function that prints every minute of the day, 24 hour clock
*
* h = hour, m = minutes
*
*  10 allows second digit to rotate
*
* for loop breaks before passing 24:00
*
* Return: 24 hour clock line by line
*/
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
