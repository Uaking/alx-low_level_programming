#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - awon main
 * @str: our string
 * Return: void
 */

char *_strdup(char *str)
{
	if (str = NULL)
		return (NULL);
	int n = 0;
	char * nstr;
	nstr = malloc(sizeof(str));

	while (str[n] != '\0')
	{
		nstr[n] = str[n];
		n++;
	}
	nstr[n + 1] = '\0';
	return (nstr);
}


