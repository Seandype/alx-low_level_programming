#include "main.h"

/**
 *_isalpha - Checks for alphabet character
 *@c: The character to be checked
 *Return: 1 for alphabet character or 0 for any other thing
 */

int _isalpha(int c)
{
	if (((c >= 65) && (c <= 98)) || ((c >= 97) && (c <= 122)))
	{
	return (1);
	}
	return (0);
}