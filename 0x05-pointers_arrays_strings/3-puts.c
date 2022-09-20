#include "holberton.h"
#include <unistd.h>
/**
 * _puts - prints a string, to stdout
 * @str: value to be evaluate.
 * Return: 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
