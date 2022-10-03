#include "main.h"
<<<<<<< HEAD
#include <ctype.h>

/**
 * _isupper - function checks if character is uppercase
 * @c: character to test
 *
 * Return: 0 if not upper, and 1 if upper
 */
int _isupper(int c)
{
	if (isupper(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
=======

/**
 * _isupper - function that checks for uppercase characters
 * @c: int type number
 * Return: 1 if uppercase, else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
>>>>>>> e66e7c357bc1ddfaa1c5f8e1eaf1d47ca9743482
}
