#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function to convert arguments to strings
 *
 * @ac: number of arguments
 * @av: actual arguments
 *
 * Return: always 0
 */

char *argstostr(int ac, char **av)
{
	int i, a;
	char *p;
	int j;

	for (i = 0; i < ac; i++)
	{
		p = (char *)malloc(ac * sizeof(char) * strlen(av[i]));
	}
	for (a = 0; a < ac; a++)
	{
		for (j = 0; j < strlen(av[j]); j++)
		{
			*(p + a) = *(av[j]);
			p++;
		}
	}
	if (ac == 0 && av == NULL)
	{
		return (NULL);
	}
	else
	{
		return (p);
	}
	free(p);
	return (0);
}
