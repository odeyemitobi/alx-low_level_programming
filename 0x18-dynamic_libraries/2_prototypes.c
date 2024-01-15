#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
 * _isdigit - Checks if a character is a digit (0-9)
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	return ((c >= '0') && (c <= '9'));
}

/**
 * _strlen - Calculates the length of a string
 * @s: The string
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * _puts - Prints a string to the standard output
 * @s: The string to print
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}

/**
 * _strcpy - Copies a string from source to destination
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	char *originalDest = dest;

	while ((*dest++ = *src++) != '\0')
		;
	return (originalDest);
}

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer value.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ')
	{
		s++;
	}

	if ((*s == '-') || (*s == '+'))
	{
		sign = ((*s == '-') ? -1 : 1);
		s++;
	}

	while ((*s >= '0') && (*s <= '9'))
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (sign * result);
}
