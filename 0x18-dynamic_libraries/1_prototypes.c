#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (putchar(c));
}

/**
 * _islower - Checks if a character is a lowercase letter
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	return ((c >= 'a') && (c <= 'z'));
}

/**
 * _isalpha - Checks if a character is an alphabetic character
 * @c: The character to check
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise.
 */
int _isalpha(int c)
{
	return (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')));
}

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer
 *
 * Return: The absolute value of n.
 */
int _abs(int n)
{
	return ((n < 0) ? -n : n);
}

/**
 * _isupper - Checks if a character is an uppercase letter
 * @c: The character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z'));
}


