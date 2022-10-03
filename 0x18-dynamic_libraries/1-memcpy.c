#include "main.h"
<<<<<<< HEAD
#include <string.h>

/**
 * _memcpy - function to n bytes from memory area src to memory area dest
 * @dest: destination memory
 * @src: source memory
 * @n: bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
=======

/**
 * _memcpy - copy memory area
 * @dest: char array to copy into
 * @src: char array to copy from
 * @n: number of elements to copy
 * Return: pointer to `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}

>>>>>>> e66e7c357bc1ddfaa1c5f8e1eaf1d47ca9743482
	return (dest);
}
