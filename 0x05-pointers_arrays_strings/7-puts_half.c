#include "main.h"

/**
 *puts_half - prints half of a string,
 *@str: string to be half printed
 *Return: void
 */
void puts_half(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
	j++;
	}

	for (i = 0; i < j / 2; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
