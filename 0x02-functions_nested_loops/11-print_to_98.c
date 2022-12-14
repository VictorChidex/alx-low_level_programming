#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print n to 98
 * @n: int type defined in function
 * Retune: Always return 0
 */
void print_to_98(int n)
{
	int c;

	for (c = n; c <= 98; c++)
	{
		if (c != 98)
			printf("%d, ", c);
		else
			printf("%d\n", c);
	}
}
