#include "main.h"

/**
 *_isdigit - checks for numbers
 *@c: is the value to check
 *Return: 1 if its a digit or 0 if any thing else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
