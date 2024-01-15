#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
	char *originalDest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while ((*dest++ = *src++) != '\0')
		;
	return (originalDest);
}

/**
 * _strncat - Concatenates 2 strings
 * @dest: The destination string
 * @src: The source string
 * @n: The number of characters to concatenate
 *
 * Return: A pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *originalDest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (n-- > 0 && (*dest++ = *src++) != '\0')
		;

	return (originalDest);
}

/**
 * _strncpy - Copies a string
 * @dest: The destination string
 * @src: The source string
 * @n: The number of characters to copy
 *
 * Return: A pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *originalDest = dest;

	while (n-- > 0 && (*dest++ = *src++) != '\0')
		;

	return (originalDest);
}

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 0 if the strings are equal, a negative value if s1 < s2,
 * a positive value if s1 > s2.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

/**
 * _memset - Fills a block of memory with a specific value
 * @s: The memory area to fill
 * @b: The constant byte to fill with
 * @n: The number of bytes to fill
 *
 * Return: A pointer to the byte after the last filled byte.
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n-- > 0)
	{
		*s++ = b;
	}
	return (s);
}
