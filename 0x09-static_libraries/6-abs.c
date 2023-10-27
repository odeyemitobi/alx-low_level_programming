#include "main.h"
/**
 * _abs - Computes the absolute integer
 *
 * @n: number to be printed out
 *
 * Return: returns the result of n
 */
int _abs(int n)
{
	int result;

	if (n >= 0)
	{
		result = n;
	}
	else if (n < 0)
	{
		result = -n;
	}
	return (result);
}
