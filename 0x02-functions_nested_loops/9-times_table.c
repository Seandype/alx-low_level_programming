#include "main.h"

/**
 *times_table - prints 9 times table
 *
 *Return: Always void
 */

void times_table(void)
{
	int i;

	For (i = 0; i <= 9; i++)
	{
	_putchar(i * 9);
	}
	_putchar('\n');
	return (0);
}
