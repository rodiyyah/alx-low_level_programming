#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: 0
 */
int main(void)
{
	char *_putchar = "_putchar";

	while (*_putchar)
	{
		putchar(*_putchar);
		_putchar++;
	}
	_putchar('\n');
	return (0);