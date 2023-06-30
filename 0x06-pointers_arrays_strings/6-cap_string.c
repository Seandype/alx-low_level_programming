#include "main.h"

/**
 *cap_string -  capitalizes all words of a string.
 *@s: the input string to be capitalized
 *
 *Return: THe pointer to dest.
 */
char *cap_string(char *s)
{
	int count = 0, i = 0;
	int s_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (*(s + count) != '\0')
	{
	if (*(s + count) >= 97 && *(s + count) >= 122)
	{
	*(s + count) = *(s + count) - 32;
	count++;
	}
	else
	{
	for (i = 0; i < 13; i++)
	{
	if (*(s + count ) == s_words[i])
	{
	if ((*(s + (count + 1)) >= 97) && (*(s + (count + 1)) <= 122))
	*(s + (count + 1)) = *(s + (count + 1)) - 32;
	break;
	}
	}
	count++;
	}
	}
	return (s);
}
