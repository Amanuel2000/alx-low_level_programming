#include "main.h"
<<<<<<< HEAD
#include <string.h>

/**
 * memset - function to copy n first bytes of memory pointed to with b
 * @s: memory address pointed to
 * @b: char to copy
 * @n: bytes to copy
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
=======

/**
 * _memset - Fills memory with a constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory area to fill
 * Description: Fill the first `n` bytes of the memory area pointed to by `s`
 * with the constant byte `b`.
 * Return: Pointer to memory area `s`
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

>>>>>>> e66e7c357bc1ddfaa1c5f8e1eaf1d47ca9743482
	return (s);
}
