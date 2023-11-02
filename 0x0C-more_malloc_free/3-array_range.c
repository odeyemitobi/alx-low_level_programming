#include <stdio.h>
#include <stdlib.h>

/**
 * array_range -Form an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *tr;
	int diff, j;

	if (min > max)
		return (NULL);

	diff = max - min;
	tr = malloc((diff + 1) * sizeof(int));
	if (tr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= diff; j++)
	{
		tr[j] = min++;
	}
	return (tr);
}
