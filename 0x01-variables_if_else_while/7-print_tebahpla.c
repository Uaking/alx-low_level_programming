#include <stdio.h>

/**
 * main - prints a program
 * Return: 0 if sucessful
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
