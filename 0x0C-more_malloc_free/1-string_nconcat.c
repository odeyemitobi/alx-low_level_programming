#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - combines two strings together.
 * @s1: first string pointer
 * @s2: second string pointer
 *
 * @n: scale of bytes to combined strings
 *
 * Return: pointer to the assigned memory else NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int ls1, ls2, lstr, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lstr = ls1 + n;

	str = malloc(lstr + 1);

	if (str == NULL)
		return (NULL);

	for (j = 0; j < lstr; j++)
		if (j < ls1)
		{
			str[j] = s1[j];
		}
		else
		{
			str[j] = s2[j - ls1];
		}

	str[j] = '\0';

	return (str);
}
