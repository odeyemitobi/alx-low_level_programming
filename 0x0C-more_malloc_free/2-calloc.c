#include <stdlib.h>
#include "main.h"
/**
  * _calloc - assigns array's while utilizing malloc.
  *
  * @nmemb: amount of values in an array.
  * @size: scale of values of an array.
  *
  * Return: Pointer to assigned memory
  *
  * If size or nmemb is 0, then produce NULL.
  * Otherwise NULL if malloc fails.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *data;
	unsigned int p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	data = malloc(nmemb * size);
	if (data == NULL)
	{
		return (NULL);
	}

	for (p = 0; p < (nmemb * size); p++)
	{
		*((char *)(data) + p) = 0;
	}

	return (data);
}
