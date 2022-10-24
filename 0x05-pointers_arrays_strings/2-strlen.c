#include "main.h"
#include <stdio.h>

/**
 * _strlen: - returns size of a char
 * @s: the char to check
 */

int _strlen(char *s)
{
int i;
i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}
