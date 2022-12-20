#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers
 * @a: a pointer
 * @b: b pointer
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
