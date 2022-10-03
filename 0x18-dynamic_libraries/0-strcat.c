#include "main.h"
<<<<<<< HEAD
#include <string.h>

/**
 * _strcat - function to concatenate two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
=======

/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
>>>>>>> e66e7c357bc1ddfaa1c5f8e1eaf1d47ca9743482
	return (dest);
}
