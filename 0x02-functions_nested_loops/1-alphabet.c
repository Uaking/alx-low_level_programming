#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * Return: 0 if sucessful
 */

void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
