#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - this prints a name.
 * @name: Name of the pointer expected to print
 * @f: Function's pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
