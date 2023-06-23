#include "main.h"

/**
 *print_most_numbers - prints the number 0 to 9
 *Description: Prints the numbers 0 to 9 excludingh 2 and 4
 *Return: The numbers 0 to 9 excluding 2 and 4
 */

void print_most_numbers(void)
{
	int a = 0;

	for (; a <= 9; a++)
	{
	if (a == 2 || a == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n');
}
