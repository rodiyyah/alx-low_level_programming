#include "main.h"
/**
 * _isdigit - function that check if it's a digit
 * @c: takes in a character/digit
 * Return: 1 if digit else return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
		return (0);
}
