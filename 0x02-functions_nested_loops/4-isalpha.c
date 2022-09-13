#include "main.h"
/**
 * main - check for alphabetic character.
 *
 * Return: 0
 */
int _isalpha(int c)
{
	for ((c >= 'a'; c <= 'z'; c++) || (c >= 'A' && c <= 'Z'))
	{
		return(1);
	}
	return(0);
}
