#include "main.h"
<<<<<<< HEAD
#include <ctype.h>

/**
 * _isdigit - function to check for digit
 * @c: character
 *
 * Return: 0 if not digit, otherwise returns 1
 */
int _isdigit(int c)
{
	if (isdigit(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
=======

/**
 * _isdigit - Check for digits (0 through 9)
 * @c: int type param
 * Return: 1 if digit, else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
>>>>>>> e66e7c357bc1ddfaa1c5f8e1eaf1d47ca9743482
}
