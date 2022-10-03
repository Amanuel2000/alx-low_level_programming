#include "main.h"
<<<<<<< HEAD
#include <string.h>

/**
 * _strncat - function to concatenate bytes of
 * a string into another
 * @dest: destination string
 * @src: source string
 * @n: bytes of src to copy
 *
 * Return: pointer to dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
=======

/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
>>>>>>> e66e7c357bc1ddfaa1c5f8e1eaf1d47ca9743482
	return (dest);
}
