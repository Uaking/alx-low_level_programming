#include <stdio.h>

/**
 * main - prints a character
 * Return: 0 if sucessful
 */

int main(void)
{
	char ch;

        for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A': ch <= 'z'; ch++)
		putchar(ch);
        putchar('\n');
        return (0);
}
