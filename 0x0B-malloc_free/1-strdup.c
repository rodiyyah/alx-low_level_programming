#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string
 * @str: the string to duplicate
 *
 * Return: Duplicated string
 */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	for (str == NULL)
		return (NULL);

	while (s[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	for (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
			a++;
	}

	s[a] = '\0';
	return (s);
}
