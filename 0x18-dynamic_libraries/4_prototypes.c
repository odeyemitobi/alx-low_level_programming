#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 * @dest: The destination memory area
 * @src: The source memory area
 * @n: The number of bytes to copy
 *
 * Return: A pointer to the byte after the last copied byte.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *originalDest = dest;

	while (n-- > 0)
	{
		*dest++ = *src++;
	}

	return (originalDest);
}

/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: The string
 * @c: The character to locate
 *
 * Return: A pointer to the first occurrence of the character in the string,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}

/**
 * _strspn - Calculates the length of the initial segment of s
 * @s: The string
 * @accept: The characters to match
 *
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while ((*s != '\0') && (_strchr(accept, *s) != NULL))
	{
		count++;
		s++;
	}

	return (count);
}

/**
 * _strpbrk - Locates the first occurrence in the string s of any character
 * @s: The string
 * @accept: The characters to search for
 *
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (_strchr(accept, *s) != NULL)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}

/**
 * _strstr - Locates the first occurrence of the substring needle
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while ((*n != '\0') && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
