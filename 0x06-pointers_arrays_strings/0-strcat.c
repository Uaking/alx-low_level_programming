#include <stdio.h>
#include "main.h"

/**
 * _strcat - merges two strings
 * @dest: first integer
 * @src: source file
 */

char *_strcat(char *dest, char *src)
{
	int i, z;
	i = 0;
	
	while (dest[i] != '\0')
	{
		i++;
	}
	
	for (z = 0; src[z] != '\0'; z++)
	{
		dest[i] = src[z];
		i++;
	}
	return (dest);
}
