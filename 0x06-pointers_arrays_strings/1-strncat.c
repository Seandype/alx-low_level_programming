#include "main.h"

/**
 **_strncat - function that concatenates two strings.
 *@dest: The string to be appended to
 *@src: The source string that is been added to dest
 *@n:The number of bytes from sdrc to be appended to dest
 *Return:A pointer to the resulting string
 *
 */

char *_strncat(char *dest, char *src, int n)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
	dest_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
	dest[dest_len++] = src[index];
	}
	return (dest);
}
