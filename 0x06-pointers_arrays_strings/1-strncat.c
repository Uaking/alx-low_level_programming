#include <stdio.h>

/**
 * _strncat - merges two strings
 * @dest: first integer
 * @src: source file
 * @n: the number of times
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, z;
	i = 0;
	z = 0;
	
	while (dest[i] != '\0')
	{
		i++;
	}
	
	while (src[z] != '\0' &&  z < n)
	{
		dest[i] = src[z];
		i++;
		z++;
	}
	return (dest);
}
