#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the argument count
 * @av: the argument values
 *
 * Return: a pointer to a string of the concatenate program
 */

char *argstostr(int ac, char **av)
{
	int i = 0;
	unsigned long int j = 0;
	int k = 0;
	int total_len = 0;
	char *concat_str;

	/* set null exceptions */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* calculate the tutal length of each string in av, + 1 for newline */
	for (i = 0; i < ac; i++)
		total_len += strlen(av[i]) + 1;

	/* allocate the total length + 1 for that sweet null terminator */
	concat_str = malloc(sizeof(char) * (total_len + 1));

	/* We always wanna set exceptions for when malloc fails */
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] > 0; j++)
		{
			concat_str[k] = av[i][j];
			k++;
		}
		concat_str[k] = '\n';
		k++;
	}

	concat_str[total_len + 1] = '\0';

	return (concat_str);
}
