#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a string
 * @s: the string to count
 *
 * Return: int;
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
