#include "main.h"

/**
 *print_diagonal - draws a straight line in the terminal
 *@n: number of charactesr that forms the diagonal line
 *Return: empty
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < n; y++)
	{
	putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
