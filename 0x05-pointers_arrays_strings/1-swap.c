#include "main.h"
#include <stdio.h>

/**
 *swap_int - swaps the values of two integers.
 *@a: first integer
 *@b: Second integer
 *Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
