#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that assigns memory while utilizing malloc.
 *
 * @b: scale of integers assigned.
 *
 * Return: pointer to allocated memory else NULL.
 */
void *malloc_checked(unsigned int b)
{
	void *h;

	h = malloc(b);

	if (h == NULL)
	{
		exit(98);
	}
	return (h);
}
