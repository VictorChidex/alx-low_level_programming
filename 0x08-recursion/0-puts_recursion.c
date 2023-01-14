#include <stdio.h>

/**
 * _puts_recursion - Program for recursiion to a string
 *
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	while(*s != '\0')
	{
		putchar(*s);
		s++;
	}
	putchar('\n');
}
