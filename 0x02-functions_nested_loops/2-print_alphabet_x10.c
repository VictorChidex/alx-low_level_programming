#include "main.h"

/**
  * print_alphabet_x10 - print all alphabets in lowercases x10
  * is written by Chidera
  * Return: Always 0 (Success)
  */
void print_alphabet_x10(void)
{
	char alphabet;
	int num;

	for (num = 1; num <= 10; num++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
