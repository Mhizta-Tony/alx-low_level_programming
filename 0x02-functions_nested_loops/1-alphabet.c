#include "main.h"
/**
 * print_alphabet - print the alphabet
 *
 * Return: Always success
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
