#include <stdio.h>

/**
 * main - prints in caps letter
 * Return: always 0 (sucessful)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
